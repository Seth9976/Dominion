// 函数: _Z18TextureLoadWithQOIP9ImageSpecPhi
// 地址: 0xfe5720
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t var_38
void* x0_1 = qoi_decode(arg2, zx.q(arg3), &var_38, 0)
char var_30
uint32_t x8_1 = zx.d(var_30)
int64_t v0 = var_38
void* var_28 = x0_1
int64_t var_20 = v0
int64_t x1_1

if (x8_1 == 4)
    x1_1 = 2
else
    if (x8_1 != 3)
        pthread_kill(pthread_self(), 6)
        return sub_fe57b4(XNoReturn()) __tailcall
    
    x1_1 = 0x14

int32_t var_14 = x1_1.d
int32_t var_18 = TextureFormatPitch(v0.d, x1_1)
ImageBufferCopyToNewFormat(&var_28, arg1)
XFree(var_28)
return 1
