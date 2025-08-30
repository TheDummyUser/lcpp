#include <cstdlib>
#include <ctime>
#include <filesystem>
#include <iostream>
#include <ostream>
#include <vector>
namespace fs = std::filesystem;

int main() {
  fs::path walls = "/home/gabbar/Pictures/wall";
  std::vector<fs::directory_entry> files;
  srand(time(NULL));
  for (fs::directory_entry s : fs::directory_iterator(walls)) {
    files.push_back(s);
  }
  int random = rand() % files.size();
  fs::path selectedPath = files[random].path();
  std::cout << files[random].path() << std::endl;
  std::string cmd = "swww img --transition-type wipe --transition-step 60 \"" +
                    selectedPath.string() + "\"";
  int ret = std::system(cmd.c_str());
  return ret;
}
