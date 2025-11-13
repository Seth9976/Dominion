// 函数: _Z23GLDupCheck_glUniform3fviiPKf
// 地址: 0xf8a204
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x20 = muls.dp.d(arg2, 0xc)
int64_t result = memcmp(*gOpenGLInterface + (sx.q(arg1) << 4) + 0x20, arg3, x20)

if (result.d == 0)
    return result

glUniform3fv(zx.q(arg1), zx.q(arg2), arg3)
return memcpy(*gOpenGLInterface + (sx.q(arg1) << 4) + 0x20, arg3, x20) __tailcall
