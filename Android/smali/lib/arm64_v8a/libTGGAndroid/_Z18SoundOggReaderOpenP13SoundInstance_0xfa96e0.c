// 函数: _Z18SoundOggReaderOpenP13SoundInstance
// 地址: 0xfa96e0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = XPooledCalloc(0x3c8)
int64_t x21 = *arg1
*(x0 + 0x3b8) = 0
*(x0 + 0x3c0) = 0
*(x0 + 0x3b0) = x21
int128_t var_40
__builtin_memcpy(&var_40, 
    "\xe0\x93\xfa\x00\x00\x00\x00\x00\xc8\x94\xfa\x00\x00\x00\x00\x00\x78\x95\xfa\x00\x00\x00\x00\x00\x"
"80\x95\xfa\x00\x00\x00\x00\x00", 
    0x20)
int64_t result = ov_open_callbacks(x0, x0, 0, 0, &var_40)

if ((result.d & 0x80000000) == 0)
    *(arg1 + 0x68) = x0
    return result

XString::operator char const*()
XTrace("failed to read ogg %s %d")
pthread_kill(pthread_self(), 6)
return SoundOggReaderClose(XNoReturn()) __tailcall
