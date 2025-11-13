// 函数: _ZN5Botan3TLS15Blocking_Client4readEPhm
// 地址: 0xe57268
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x0 = operator new(0x1000)
memset(x0, 0, 0x1000)
char* x8_1
int64_t result_1

while (true)
    x8_1 = *(arg1 + 0x170)
    char* x9_2 = *(arg1 + 0x178)
    
    if (x8_1 == x9_2)
        if (zx.d(arg1[0x110]) != 0)
            x9_2 = x8_1
        else
            uint64_t var_38 = x0
            int64_t var_48 = 0x1000
            int64_t* x0_1 = *(arg1 + 0x30)
            
            if (x0_1 == 0)
                sub_a58ab4()
                noreturn
            
            (*(*x0_1 + 0x30))(x0_1, &var_38, &var_48)
            Botan::TLS::Channel::received_data(&arg1[0x48], x0)
            continue
    
    result_1 = x9_2 - x8_1
    break

int64_t entry_result
int64_t result

result = result_1 u< entry_result ? result_1 : entry_result

if (result != 0)
    *arg2 = *x8_1
    
    if (result != 1)
        int64_t x8_5 = 1
        
        do
            *(arg2 + x8_5) = (*(arg1 + 0x170))[x8_5]
            x8_5 += 1
        while (result != x8_5)

if (result != 0 && result != 0)
    int64_t x21_1 = *(arg1 + 0x170)
    int64_t x8_6 = *(arg1 + 0x178)
    int64_t x1_2 = x21_1 + result
    size_t x23_1 = x8_6 - x1_2
    
    if (x8_6 != x1_2)
        memmove(x21_1, x1_2, x23_1)
    
    *(arg1 + 0x178) = x21_1 + x23_1
else if (zx.d(arg1[0x110]) == 0)
    int64_t* x0_7 = Botan::assertion_failure("returned == 0 implies m_channel.is_closed()", 
        "Only return zero if channel is closed", "read", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x13cc9)
    operator delete(x0)
    sub_1101e04(x0_7)
    noreturn

operator delete(x0)
return result
