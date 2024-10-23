

//Khai bao nguyen mau
void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int chon, MaTran a, unsigned int& n);
void ChayChuongTrinh();


//Dinh nghia ham
void XuatMenu()
{
	cout << "\n0. Thoat chuong trinh";
	cout << "\n1. nhap ma tran vuong cap n ";
	cout << "\n2. Xuat ma tran";
	cout << "\n3. in ra man hinh ma tran xoan oc";
	
	
}

int ChonMenu(int soMenu)
{
	int chon;
	do{
    
		XuatMenu();

		cout << "\nNhap chon[0..." << soMenu << "]=";
		cin >> chon;
        
		if (0 <= chon && chon <= soMenu)
			break;
    
	} while (true);
	return chon;
}



void XuLyMenu(int chon, MaTran a, unsigned int& n)
{
    
    

	switch (chon)
	{
	case 0:
        
		cout << "\n0. Thoat chuong trinh";

		break;
	case 1:
        

        cout << "nhap cap cua ma tran: ";
        cin >> n;
    
		cout << "nhap ma tran \n";
        
		nhapMaTran(a, n);


		break;
	case 2:

		cout << "\n2. Xuat ma tran\n";

		xuatMaTran(a, n);

        cout << endl;

		break;
    
    case 3:

        cout << "\n3. xuat ma tran xoan oc\n";

		cout << "nhap cap cua ma tran: ";
        cin >> n;

        xuatxoanOc(a, n);

		

		break;
    
	
	default:
		break;
	}
	_getch();
}



void ChayChuongTrinh()
{
    
	int soMenu = 3, chon;
    unsigned int n;
    MaTran a;
    
	do
	{
		system("cls");
		chon = ChonMenu(soMenu);

		XuLyMenu(chon, a, n);

	} while (chon != 0);
}