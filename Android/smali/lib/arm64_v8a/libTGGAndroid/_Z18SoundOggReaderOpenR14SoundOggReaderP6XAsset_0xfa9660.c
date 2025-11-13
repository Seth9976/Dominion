// 函数: _Z18SoundOggReaderOpenR14SoundOggReaderP6XAsset
// 地址: 0xfa9660
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg1 + 0x3b0) = arg2
*(arg1 + 0x3b8) = 0
*(arg1 + 0x3c0) = 0
int128_t var_30
__builtin_memcpy(&var_30, 
    "\xe0\x93\xfa\x00\x00\x00\x00\x00\xc8\x94\xfa\x00\x00\x00\x00\x00\x78\x95\xfa\x00\x00\x00\x00\x00\x"
"80\x95\xfa\x00\x00\x00\x00\x00", 
    0x20)
int64_t result = ov_open_callbacks(arg1, arg1, 0, 0, &var_30)

if ((result.d & 0x80000000) == 0)
    return result

XString::operator char const*()
XTrace("failed to read ogg %s %d")
pthread_kill(pthread_self(), 6)
return SoundOggReaderOpen(XNoReturn()) __tailcall
