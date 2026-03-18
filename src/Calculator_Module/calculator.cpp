#include <iostream>
#include <string>

using namespace std;

struct Product {
    int price;
};

int start() {
    const char* menuText = "1: 상품 입력, 2: 결제, 3: 프로그램 종료";
    int totalCost = 0;

    while (true) {
        cout << menuText << endl;
        int input;
        cin >> input;

        if (input == 1) {
            cin.ignore();
            string productName;
            cout << "상품 이름을 입력해 주세요: " << endl;
            getline(cin, productName);

            int productPrice;
            cout << "상품 가격을 입력해 주세요: " << endl;
            cin >> productPrice;

            int productQuantity;
            cout << "구매수량을 입력해 주세요: " << endl;
            cin >> productQuantity;

            int sum = productPrice * productQuantity;
            totalCost += sum;

            cout << "상품명:" << productName << " 가격:" << productPrice 
                 << " 수량:" << productQuantity << " 합계:" << sum << endl;

        } else if (input == 2) {
            cout << "총 비용: " << totalCost << endl;
            totalCost = 0;
        } else if (input == 3) {
            cout << "프로그램을 종료합니다." << endl;
            break;
        }
    }
    return 0;
}

int main() {
    start();
    return 0;
}