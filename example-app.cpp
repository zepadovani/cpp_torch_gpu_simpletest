#include <torch/torch.h>
#include <iostream>

int main() {
  // Check if CUDA is available
  if (torch::cuda::is_available()) {
    std::cout << "CUDA is available! Using GPU." << std::endl;
  } else {
    std::cout << "CUDA is not available. Using CPU." << std::endl;
  }

  // Set device to CUDA if available, otherwise use CPU
  torch::Device device(torch::cuda::is_available() ? torch::kCUDA : torch::kCPU);

  // Create a tensor on the selected device
  torch::Tensor tensor = torch::rand({2, 3}).to(device); 

  std::cout << tensor << std::endl;
}

// #include <torch/torch.h>
// #include <iostream>

// int main() {
//   torch::Tensor tensor = torch::rand({2, 3});
//   std::cout << tensor << std::endl;
// }