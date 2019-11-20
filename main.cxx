#include <iostream>
#include <filesystem>

namespace fs = std::filesystem;
using namespace std;

int main()
{
    auto ps = [&]()->bool {
        std::cout << "Start code in lamda" << std::endl;
        fs::path pathToShow("~/");
        cout << "exists() = " << fs::exists(pathToShow) << "\n"
             << "root_name() = " << pathToShow.root_name() << "\n"
             << "root_path() = " << pathToShow.root_path() << "\n"
             << "relative_path() = " << pathToShow.relative_path() << "\n"
             << "parent_path() = " << pathToShow.parent_path() << "\n"
             << "filename() = " << pathToShow.filename() << "\n";
//             << "stem() = " << pathToShow.stem() << "\n"
//             << "extension() = " << pathToShow.extension() << "\n";
        
        
        return 0;
    };

    return ps();

}
