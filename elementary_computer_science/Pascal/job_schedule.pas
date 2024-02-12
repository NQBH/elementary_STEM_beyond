program job_schedule;
const MAX = 100;
	fi = 'job_schedule.inp';
	fo = 'job_schedule.out';
type TJob = record p, d, name: longint; end;
	TArrJobs = array[1..MAX] of TJob;
var jobs, js: TArrJobs;
	d: array[1..MAX] of longint;
	m, n: longint;

procedure input;
var f: text;
	i: longint;
begin
	assign(f, fi);
	reset(f);
	readln(f,n);
	for i := 1 to n do read(f, jobs[i].p);
	for i := 1 to n do read(f, jobs[i].d);
	close(f);
	for i := 1 to n do jobs[i].name := i;
end;

procedure swap(var j1, j2: TJob);
var tmp: TJob;
begin
	tmp := j1;
	j1 := j2;
	j2 := tmp;
end;

function check(var Js: TArrJobs; nJob: longint): boolean;
var i, j, t: longint;
begin
	for i := 1 to nJob - 1 do
		for j := i + 1 to nJob do
			if Js[i].d > Js[j].d then swap(Js[i], Js[j]);
	t := 0;
	for i := 1 to nJob do
	begin
		if t + Js[i].p > Js[i].d then exit(false);
		t := t + Js[i].p;
	end;
	exit(true);
end;

procedure greedy;
var i, j: longint;
	Js2: TArrJobs;
begin
	for i := 1 to n - 1 do
		for j := i + 1 to n do
			if jobs[i].p > jobs[j].p then swap(jobs[i], jobs[j]);
	fillchar(d, sizeof(d), 0);
	m := 0;
	for i := 1 to n do
	begin
		Js2 := Js;
		Js2[m + 1] := jobs[i];
		if check(Js2, m + 1) then
		begin
			m := m + 1;
			Js := Js2;
			d[i] := 1;
		end;
	end;
	for i := 1 to n do
		if d[i] = 0 then
		begin
			m := m + 1;
			Js[m] := jobs[i];
		end;
end;

procedure display;
var i: longint;
	f: text;
begin
	assign(f, fo);
	rewrite(f);
	for i := 1 to n do write(f, Js[i].name, ' ');
	close(f);
end;

begin
	input;
	greedy;
	display;
end.