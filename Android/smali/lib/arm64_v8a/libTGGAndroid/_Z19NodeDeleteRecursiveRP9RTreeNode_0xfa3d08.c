// 函数: _Z19NodeDeleteRecursiveRP9RTreeNode
// 地址: 0xfa3d08
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

RTreeNode* x8 = *arg1

if (x8 == 0)
    return 

if (*(x8 + 0x20) != 0)
    NodeDeleteRecursive(x8 + 0x20)
    NodeDeleteRecursive(*arg1 + 0x28)
    x8 = *arg1

int64_t x11_1 = *gRTreeGlobals
*(gRTreeGlobals + 0x14) -= 1
*x8 = x11_1
*gRTreeGlobals = x8
*arg1 = nullptr
