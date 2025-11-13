// 函数: _ZN5BotaneqERKNS_9CRL_EntryES2_
// 地址: 0xe97ed8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x0 = Botan::CRL_Entry::data()
int64_t* x0_2 = Botan::CRL_Entry::data()
char* x9 = *x0
int64_t x8 = x0[1]
char* x10 = *x0_2

if (x8 - x9 == x0_2[1] - x10)
    if (x9 != x8)
        do
            if (zx.d(*x9) != zx.d(*x10))
                return 0
            
            x9 = &x9[1]
            x10 = &x10[1]
        while (x8 != x9)
    
    Botan::ASN1_Time* x21_1 = Botan::CRL_Entry::data() + 0x18
    Botan::CRL_Entry::data()
    
    if (Botan::ASN1_Time::cmp(x21_1) == 0)
        return zx.q(*(Botan::CRL_Entry::data() + 0x40) == *(Botan::CRL_Entry::data() + 0x40) ? 1
            : 0)

return 0
