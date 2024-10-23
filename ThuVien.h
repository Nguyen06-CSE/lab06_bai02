#define MAX 100
#define TAB '\t'

typedef double MaTran [MAX][MAX];


void nhapMaTran(MaTran a, unsigned int& n);
void xuatMaTran(MaTran a, unsigned int n);
void xuatxoanOc(MaTran a, unsigned int& n);



void nhapMaTran(MaTran a, unsigned int& n){
    for(int i = 0; i < n; i++){
        cout << "hanh thu " << i << endl;
        for(int j = 0; j < n; j++){
            cout << "a[" << i << "]" << "[" << j << "]=";
            cin >> a[i][j];
        }
    }
}


void xuatMaTran(MaTran a, unsigned int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << a[i][j] << TAB;
        }
        cout << endl;
    }
}

void xuatxoanOc(MaTran a, unsigned int& n) {
    int rowUp = 0, rowDow = n - 1;
    int columLeft = 0, columRight = n - 1;
    int dem = 1;

    while (rowUp <= rowDow && columLeft <= columRight) {
        for (int i = columLeft; i <= columRight; i++) {
            a[rowUp][i] = dem;
            ++dem;
        }
        ++rowUp;

        for (int i = rowUp; i <= rowDow; i++) {
            a[i][columRight] = dem;
            ++dem;
        }
        --columRight;

        if (rowUp <= rowDow) {
            for (int i = columRight; i >= columLeft; i--) {
                a[rowDow][i] = dem;
                ++dem;
            }
            --rowDow;
        }

        if (columLeft <= columRight) {
            for (int i = rowDow; i >= rowUp; i--) {
                a[i][columLeft] = dem;
                ++dem;
            }
            ++columLeft;
        }
    }

    xuatMaTran(a, n); 
}



