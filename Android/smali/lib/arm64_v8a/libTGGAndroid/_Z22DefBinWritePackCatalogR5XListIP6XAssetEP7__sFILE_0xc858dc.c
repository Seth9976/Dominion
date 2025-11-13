// 函数: _Z22DefBinWritePackCatalogR5XListIP6XAssetEP7__sFILE
// 地址: 0xc858dc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x21 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x21 + 0x28)
int64_t* x22 = *arg1
int32_t x20 = 0xc + *(arg1 + 0x10) * 0xa8
int64_t* x23_1
bool cond:0_1

do
    x23_1 = x22
    
    if (x22 == 0)
        break
    
    x22 = x23_1[1]
    void buf
    DefBinWriteMakeAssetEntry(&buf, *x23_1, x20)
    cond:0_1 = fwrite(&buf, 0xa8, 1, arg2) == 1
    int32_t var_d0
    x20 += var_d0
while (cond:0_1)

if (*(x21 + 0x28) == x8)
    return zx.q(x23_1 == 0 ? 1 : 0)

__stack_chk_fail()
noreturn
