#include <iostream>

int main() {
    int main_var = 0;
    std::cout << main_var << std::endl;

    {// Phạn vi 1
        int scope_var_1 = 1;
        std::cout << scope_var_1 << std::endl;

        {
            std::cout << scope_var_1 << std::endl;
        }
    }

    {// Phạn vi 2
        // int scope_var_1 = 4; // nếu không khai báo thì sẽ bị lỗi => nếu khai báo thì sẽ sử dụng biến ở trong phạm vi
        int scope_var_2 = 2;
        std::cout << scope_var_2 << std::endl;
        std::cout << scope_var_1 << std::endl; //'scope_var_1' was not declared in this scope;
    }
}
