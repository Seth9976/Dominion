// 函数: _ZN5Botan25ProcWalking_EntropySource4pollERNS_21RandomNumberGeneratorE
// 地址: 0xdf0064
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

std::__ndk1::mutex::lock()

if (*(arg1 + 0x48) == 0)
    struct Botan::File_Descriptor_Source::Botan::(anonymous namespace)::Directory_Walker::VTable** 
        x0_1 = operator new(0x58)
    *x0_1 = &_vtable_for_Botan::(anonymous namespace)::Directory_Walker{for `Botan::File_Descriptor_Source'}
    x0_1[1] = 0
    x0_1[2].w = 0
    __builtin_memset(&x0_1[6], 0, 0x28)
    *(x0_1 + 0x20) = zx.o(0)
    void* __offset(Botan::RandomNumberGenerator, 0x9) name
    
    if ((zx.d(*(arg1 + 8)) & 1) != 0)
        name = *(arg1 + 0x18)
    else
        name = arg1 + 9
    
    DIR* x0_2 = opendir(name)
    
    if (x0_2 != 0)
        int128_t var_68
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &var_68)
        uint32_t x9_2 = zx.d(x0_1[2].b)
        x0_1[1] = x0_2
        
        if ((x9_2 & 1) != 0)
            operator delete(x0_1[4])
        
        int128_t v0_1 = var_68
        int64_t var_58
        x0_1[4] = var_58
        *(x0_1 + 0x10) = v0_1
    
    int64_t* x0_5 = *(arg1 + 0x48)
    *(arg1 + 0x48) = x0_1
    
    if (x0_5 != 0)
        (*(*x0_5 + 0x10))()

int64_t x8_6 = *(arg1 + 0x50)
int64_t x9_4 = *(arg1 + 0x58) - x8_6

if (x9_4 u<= 0xfff)
    std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(arg1 + 0x50)
else if (x9_4 != 0x1000)
    *(arg1 + 0x58) = x8_6 + 0x1000

int64_t result = 0
int64_t i_1 = 0x800
int64_t i

do
    int32_t fd = (***(arg1 + 0x48))()
    
    if (fd == 0xffffffff)
        int64_t* x0_12 = *(arg1 + 0x48)
        *(arg1 + 0x48) = 0
        
        if (x0_12 != 0)
            (*(*x0_12 + 0x10))()
        
        break
    
    int64_t buf = *(arg1 + 0x50)
    ssize_t x0_9 = read(fd, buf, *(arg1 + 0x58) - buf)
    close(fd)
    
    if (x0_9 s>= 1)
        int64_t* entry_x1
        (*(*entry_x1 + 0x20))(entry_x1, *(arg1 + 0x50), x0_9)
        bool cond:0_1 = result u<= 0x7c
        result += 4
        
        if (not(cond:0_1))
            break
    
    i = i_1
    i_1 -= 1
while (i != 1)
std::__ndk1::mutex::unlock()
return result
