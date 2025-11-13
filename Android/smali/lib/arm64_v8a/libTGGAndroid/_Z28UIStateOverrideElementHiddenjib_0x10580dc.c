// 函数: _Z28UIStateOverrideElementHiddenjib
// 地址: 0x10580dc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

UIState* x20 = *(gUISystem + 0x28) + mulu.dp.d(arg1 & 0xffff, 0x458)
int64_t* x21 = *(x20 + 8)
int64_t* x8_1 = *x21

if (x8_1 == 0)
    if (x21[1].d == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(x21, false, true)
    x8_1 = *x21

int64_t x21_1 = **x8_1
int32_t* result = UIStateElementGet(x20, arg2, &data_793a18)
int32_t x8_4 = *result
int32_t x9_1 = result[0x57]
result[5].b = arg3 & 1
void* x11 = x21_1 + muls.dp.d(arg2, 0x178)
result[4] = x8_4 + 1
void* x8_6

if (x9_1 s> x8_4)
    x8_6 = &result[0x58]
else
    x8_6 = x11 + 0x6c

float v0

if (result[0x1c] == 0)
    v0 = float.s(*(x11 + 0x70))
else
    v0 = result[0x1d]

v0 = (v0 + float.s(*x8_6)) / float.s(0x447a0000)

if (not(result[7] f<= v0))
    result[7] = v0

return result
