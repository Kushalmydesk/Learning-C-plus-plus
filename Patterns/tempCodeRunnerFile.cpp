for(int i = 1; i<=rows; i++){
        for(int j = i ; j<rows; j++){
            cout<< " ";
        }
        for(int k = 1; k<=i;k++){
            cout << "x";
        }
        for(int l = 1; l<i; l++){
            cout<<"x";
        }
        cout << endl;
    }
    for(int m= 1 ; m<rows; m++){
        for(int n = 1 ; n<=m; n++){
            cout << " ";
        } 
        for(int a = m ; a<rows ; a++){
            cout << "x";
        }
        for(int p = m ; p <rows-1 ; p++){
            cout << "x";
        }
        cout<< endl;
    }