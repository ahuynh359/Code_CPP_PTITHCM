#include<iostream>
#include<string>

using namespace std;

#define KhacHang() dskh
class HoaDon;
class MatHang;
class KhachHang {
public:


	string maKh, ten, gioiTinh, ngaySinh, diaChi;
	unsigned int static demKH;


	friend istream& operator>>(istream& input, KhachHang& kh) {
		kh.demKH++;
		kh.maKh = "KH";
		for (int i = 0; i < 3 - to_string(demKH).length(); i++)
			kh.maKh += "0";
		kh.maKh += to_string(demKH);
		cout << kh.maKh << endl;
		if (kh.maKh == "KH001")
			input.ignore();
		cout << demKH << endl;
		getline(input, kh.ten);
		input >> kh.gioiTinh >> kh.ngaySinh;
		input.ignore();
		getline(input, kh.diaChi);
		return input;
	}
	friend class HoaDon;

};
unsigned int KhachHang::demKH = 0;

class MatHang {
public:

	unsigned int static demMH;
	string maMH, tenMH, donvi;
	int giaMua{}, giaBan{};



	friend istream& operator>>(istream& input, MatHang& kh) {
		kh.demMH++;
		kh.maMH = "MH";
		for (int i = 0; i < 3 - to_string(demMH).length(); i++)
			kh.maMH += "0";
		kh.maMH += to_string(demMH);
		input.ignore();
		getline(input, kh.tenMH);
		input >> kh.donvi >> kh.giaMua >> kh.giaBan;
		return input;
	}

	friend class HoaDon;
};
unsigned int  MatHang::demMH = 0;

class HoaDon {
public:

	unsigned int static demHD;
	string maKH, maMH, maHD;

	MatHang mh;
	int soLuong{};

	string KhachHang::ten;
	string KhachHang::diaChi;
	string MatHang::tenMH;
	string MatHang::donvi;
	int MatHang::giaBan;

	friend ostream& operator<<(ostream& output, const HoaDon& kh) {

		output << kh.maKH << " " << kh.ten << " " << kh.diaChi << " " << kh.mh.tenMH << " " << kh.donvi
			<< " "
			<< kh.giaBan << " " << kh.soLuong << " " << kh.soLuong * kh.giaBan << endl;

		return output;
	}

	friend istream& operator>>(istream& input, HoaDon& kh) {
		kh.demHD++;
		kh.maHD = "HD";
		for (int i = 0; i < 3 - to_string(demHD).length(); i++)
			kh.maHD += "0";
		kh.maHD += to_string(demHD);
		input >> kh.maKH >> kh.maMH >> kh.soLuong;

		return input;
	}

};

unsigned int  HoaDon::demHD = 0;

int main() {
	KhachHang dskh[25];
	MatHang dsmh[45];
	HoaDon dshd[105];
	int N, M, K, i;
	cin >> N;
	for (i = 0; i < N; i++) cin >> dskh[i];
	cin >> M;
	for (i = 0; i < M; i++) cin >> dsmh[i];
	cin >> K;
	for (i = 0; i < K; i++) cin >> dshd[i];

	for (i = 0; i < K; i++) cout << dshd[i];
	return 0;
}