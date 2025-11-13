// 函数: _Z16FileNameFromPath7XString
// 地址: 0x1065968
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x22 = *arg1
char* x21

x21 = x22 == 0 ? &data_793a18 : x22

void* result = strrchr(x21, 0x2f)
void* result_1 = result
int64_t* entry_x8

if (result != 0)
label_10659b8:
    
    if (zx.d(*(result_1 + 1)) != 0)
        int32_t x0_3 = strlen(result_1 + 1)
        int64_t* x0_5
        int128_t v0
        x0_5, v0 = XPooledMalloc(x0_3 + 0x11)
        v0.q = 0x1fafafafa
        x0_5[1].d = x0_3
        *(x0_5 + 0xc) = x0_3 + 1
        *x0_5 = 0x1fafafafa
        *entry_x8 = &x0_5[2]
        return strcpy(&x0_5[2], result_1 + 1, v0) __tailcall
    
    *entry_x8 = &data_793a18
else
    result = strrchr(x21, 0x5c)
    result_1 = result
    
    if (result != 0)
        goto label_10659b8
    
    *entry_x8 = x22
    
    if (x22 != 0 && zx.d(*x22) != 0)
        *(x22 - 0xc) += 1
return result
