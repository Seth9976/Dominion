// 函数: _ZN5Botan3TLS18New_Session_TicketC1ERKNSt6__ndk16vectorIhNS2_9allocatorIhEEEE
// 地址: 0xe538a4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg1 + 8) = 0
*(arg1 + 0x18) = 0
*(arg1 + 0x20) = 0
*arg1 = _vtable_for_Botan::TLS::New_Session_Ticket + 0x10
*(arg1 + 0x10) = 0
int128_t var_50
int64_t* entry_x1

if (entry_x1[1] - *entry_x1 u<= 5)
    void** x0_4 = __cxa_allocate_exception(0x20)
    int64_t x0_5
    int128_t v0_1
    x0_5, v0_1 = operator new(0x30)
    (*"hort to be valid")[0].o
    int64_t var_40_2 = x0_5
    v0_1 = data_71abd0
    __builtin_strncpy(x0_5, "Session ticket message too short to be valid", 0x2d)
    var_50 = v0_1
    *x0_4 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_4[1])
    *x0_4 = _vtable_for_Botan::Decoding_Error + 0x10
    __cxa_throw(x0_4, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
    noreturn

var_50.q = "SessionTicket"
var_50:8.q = entry_x1
int64_t var_40 = 0
Botan::TLS::TLS_Data_Reader::assert_at_least(&var_50)
int64_t var_40_1 = var_40 + 4
*(arg1 + 8) = _byteswap(*(*var_50:8.q + var_40))
Botan::TLS::TLS_Data_Reader::get_range<uint8_t>(&var_50, 2, 0)
void* x0_2 = *(arg1 + 0x10)

if (x0_2 != 0)
    *(arg1 + 0x18) = x0_2
    operator delete(x0_2)
    __builtin_memset(arg1 + 0x10, 0, 0x18)

int128_t var_70
*(arg1 + 0x10) = var_70
int64_t var_60
*(arg1 + 0x20) = var_60
return Botan::TLS::TLS_Data_Reader::assert_done()
