// 函数: _ZNSt6__ndk113basic_filebufIcNS_11char_traitsIcEEED2Ev
// 地址: 0xf42c64
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
FILE* fp = entry_x0[0xf]
*entry_x0 = _vtable_for_std::__ndk1::basic_filebuf<char, std::__ndk1::char_traits<char> > + 0x10

if (fp != 0)
    std::__ndk1::basic_filebuf<char, std::__ndk1::char_traits<char> >::sync()
    fclose(fp)
    void* x8_1 = *entry_x0
    entry_x0[0xf] = 0
    (*(x8_1 + 0x18))(entry_x0, 0, 0)

if (zx.d(entry_x0[0x14].b) != 0)
    void* x0_3 = entry_x0[8]
    
    if (x0_3 != 0)
        operator delete[](x0_3)

if (zx.d(*(entry_x0 + 0xa1)) != 0)
    void* x0_4 = entry_x0[0xd]
    
    if (x0_4 != 0)
        operator delete[](x0_4)

return std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::~basic_streambuf()
    __tailcall
