// 函数: _Z13UI2ExecDeletev
// 地址: 0x102dc58
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t i_4 = zx.q(*(gUI2Editor + 0x704c))
uint64_t x21 = zx.q(*(gUI2Editor + 0x6010))
UI2Handle var_1048

if (i_4.d s>= 1)
    int64_t (* x20_1)() = gUI2Editor + 0x604c
    void* x23_1 = &var_1048
    uint64_t i_3 = i_4
    uint64_t i
    
    do
        uint64_t x0_1 = zx.q(*x20_1)
        x20_1 += 4
        i = i_3
        i_3 -= 1
        *x23_1 = *(UI2GetIndex(x0_1) + 0x19a0)
        x23_1 += 4
    while (i != 1)

int64_t x8_2 = *gUI2
int32_t var_104c = i_4.d
FilterParentsOnlyRec(x8_2 + x21 * 0x19a8, &var_1048, &var_104c, false)
int64_t x21_1 = sx.q(var_104c)
bool (* var_48)(UI2Handle, UI2Handle) = CompareParentsOnly
std::__ndk1::__sort<bool (*&)(UI2Handle, UI2Handle), UI2Handle*>(&var_1048, 
    &var_1048 + (x21_1 << 2), &var_48)

if (x21_1.d s>= 1)
    int64_t i_2 = x21_1 & 0xffffffff
    UI2Handle* x22 = &var_1048
    int64_t i_1
    
    do
        uint64_t x8_3 = zx.q(*x22)
        x22 += 4
        UI2DeleteElement(*gUI2 + x8_3 * 0x19a8, false)
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

*(gUI2Editor + 0x704c) = 0
return UI2CreateUndoCheckpoint(true)
