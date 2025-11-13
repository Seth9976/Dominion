// 函数: _Z18FlanimGetActionFPSP6FlanimPKc
// 地址: 0xf64bfc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* result
int128_t v0
result, v0 = FlanimGetDef(*arg1)
int64_t* result_1 = result
void* x21_1

if (arg2 != 0)
    uint64_t i_1 = zx.q(result_1[1].d)
    
    if (i_1.d s>= 1)
        x21_1 = *result_1 + 0x10
        uint64_t i
        
        do
            result, v0 = strcasecmp(arg2, *(x21_1 - 0x10))
            
            if (result.d == 0)
                goto label_f64c50
            
            i = i_1
            i_1 -= 1
            x21_1 += 0x18
        while (i != 1)

x21_1 = result_1 + 0x54
label_f64c50:
v0.d = *x21_1
return result
