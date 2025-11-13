// 函数: _Z21sSphereTreeDetachNodeP14SphereTreeNode
// 地址: 0xfaa0ac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x8_1 = *(arg1 + 0x10)
void* x9 = x8_1[3]

if (x9 == arg1)
    x9 = x8_1[4]

void** x10 = x8_1[2]
int64_t x13 = *gSphereTreeGlobals
bool cond:0 = x10[3] == x8_1
*(gSphereTreeGlobals + 0x14) -= 1
*x8_1 = x13
*gSphereTreeGlobals = x8_1
int64_t x8

x8 = cond:0 ? 0x18 : 0x20

*(x10 + x8) = x9
*(x9 + 0x10) = x10
*(arg1 + 0x10) = 0
