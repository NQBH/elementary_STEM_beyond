#include <iostream>
using namespace std;
namespace data_2D {
	int dx = 3, dy = 4;
	float area;
}
namespace data_3D {
	int dx = 5, dy = 6, dz = 7;
	float volume;
	namespace base {
		float area, h;
	}
}
int main() {
	using namespace data_2D;
	area = dx*dy;
	cout << "data_2D::area = " << area << ".\n";
	data_3D::base::area = data_3D::dx * data_3D::dy;
	data_3D::volume = data_3D::base::area * data_3D::dz;
	data_3D::base::h = (data_3D::dx + data_3D::dy)/2;
	cout << "Data 3D:\n";
	cout << "  Volume = " << data_3D::volume << ".\n";
	cout << "  Height = " << data_3D::base::h << ".\n";
}