#pragma once

#include <vulkan/vulkan.h>
#include <fstream>
#include <string>
#include <vector>

namespace ShaderModule {
	VkShaderModule createShaderModule(const std::vector<char>& code, VkDevice logicalDevice);
	VkShaderModule createShaderModule(const std::string& filename, VkDevice logicalDevice);
}