// 函数: _Z15RTreeDetachNodeP9RTreeNode
// 地址: 0xfa3e80
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x8_1 = *(arg1 + 0x18)
void* x9 = x8_1[4]

if (x9 == arg1)
    x9 = x8_1[5]

void** x10 = x8_1[3]
int64_t x13 = *gRTreeGlobals
bool cond:0 = x10[4] == x8_1
*(gRTreeGlobals + 0x14) -= 1
*x8_1 = x13
*gRTreeGlobals = x8_1
int64_t x8

x8 = cond:0 ? 0x20 : 0x28

*(x10 + x8) = x9
*(x9 + 0x18) = x10
*(arg1 + 0x18) = 0
