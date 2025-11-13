// 函数: sub_f08480
// 地址: 0xf08480
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

DIR* dirp = arg1[1]
*arg1 =
    &_vtable_for_Botan::(anonymous namespace)::Directory_Walker{for `Botan::File_Descriptor_Source'}

if (dirp != 0)
    closedir(dirp)

std::__ndk1::__deque_base<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::clear()
int64_t* x21 = arg1[6]
int64_t x22 = arg1[7]

if (x21 != x22)
    do
        void* x0_1 = *x21
        x21 = &x21[1]
        operator delete(x0_1)
    while (x22 != x21)
    
    int64_t x9_1 = arg1[6]
    int64_t x8_1 = arg1[7]
    
    if (x8_1 != x9_1)
        arg1[7] = x8_1 + ((-1 ^ (x8_1 - x9_1 - 8) u>> 3) << 3)

void* x0_2 = arg1[5]

if (x0_2 != 0)
    operator delete(x0_2)

if ((zx.d(arg1[2].b) & 1) != 0)
    operator delete(arg1[4])

return operator delete(arg1) __tailcall
