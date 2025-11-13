// 函数: _Z16StructureDestroyP9Structure
// 地址: 0xfd2530
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

StructureUnbindMaterial(zx.q(*(arg1 + 0x90)))
StructureAnim* x0_1 = *(arg1 + 0x38)

if (x0_1 != 0)
    AnimationStructureFree(x0_1)

void* x21 = **gpGameData
void* i = *(arg1 + 0x50)

while (i != 0)
    void* i_1 = i
    i = *(i + 0x18)
    XString::~XString()
    XPooledFree(i_1, 0x28)

__builtin_memset(arg1 + 0x50, 0, 0x14)
int64_t result = XString::~XString()
int32_t x9 = *(x21 + 0x10)
*(x21 + 0x10) = zx.d(*(arg1 + 0x90))
*(arg1 + 0x90) = x9
*(x21 + 0x14) -= 1
return result
