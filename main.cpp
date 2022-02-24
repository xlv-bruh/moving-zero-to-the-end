#include <vector>

std::vector<int> move_zeroes(const std::vector<int>& input) {
  int size = input.size();
  std::vector<int> newInput{size};
  int count = 0;
  
  for(int i = 0; i < size; i++){
    if(input[i] == 0)
      continue;
    else{
      count++;
      newInput.push_back(input[i]);
    }
}
  for(int i = count; i < size; i++){
    newInput.push_back(0);
  }
  newInput.erase(newInput.begin());
  return newInput;
}
