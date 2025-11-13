// 函数: _ZNK5Botan4Pipe9remainingEm
// 地址: 0xca788c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8 = *(arg1 + 0x10)
char var_38 = 0x12
int64_t var_37
__builtin_strcpy(&var_37, "remaining")
int64_t entry_x1

if (entry_x1 == -2)
    entry_x1 = *(x8 + 0x30) + *(x8 + 0x28) - 1
else if (entry_x1 == -1)
    entry_x1 = *(arg1 + 0x18)

int64_t x9_3 = *(x8 + 0x30)

if (entry_x1 u>= *(x8 + 0x28) + x9_3)
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
        x0_1 = __cxa_allocate_exception(0x20, entry_x1)
    Botan::Pipe::Invalid_Message_Number::Invalid_Message_Number(x0_1, &var_38)
    __cxa_throw(x0_1, _typeinfo_for_Botan::Pipe::Invalid_Message_Number, 
        Botan::Exception::~Exception)
    noreturn

if (entry_x1 u< x9_3)
    return 0

int64_t x9_5 = *(x8 + 0x20) + entry_x1 - x9_3
void* x8_3 = *(*(*(x8 + 8) + (x9_5 u>> 6 & 0x3fffffffffffff8)) + ((x9_5 & 0x1ff) << 3))

if (x8_3 != 0)
    void** i = *(x8_3 + 0x60)
    
    if (i != 0)
        int64_t result = 0
        
        do
            int64_t x10_7 = i[4]
            int64_t x9_7 = i[5]
            i = *i
            result = x9_7 + result - x10_7
        while (i != 0)
        
        return result

return 0
