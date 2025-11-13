// 函数: _Z13BoardAreaPile11DomCardEnum
// 地址: 0xaeb8b0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1

if (arg1 s> 0xe18)
    uint64_t x8_2 = zx.q(x19 - 0xe19)
    
    if (x8_2.d u> 4)
        pthread_kill(pthread_self(), 6)
        return ToText(XNoReturn()) __tailcall
    
    switch (x8_2)
        case 0
            x19 = 0xe07
        case 1, 3
            x19 = 0xe00
        case 2
            x19 = 0xe17
        case 4
            x19 = 0xe16
else if (x19 s> 0xd4a)
    if (x19 - 0xd4b u>= 4)
        pthread_kill(pthread_self(), 6)
        return ToText(XNoReturn()) __tailcall
    
    x19 = 0xd3d
else if (x19 != 0x603 && x19 != 0xd00)
    if (x19 != 0xd4a)
        pthread_kill(pthread_self(), 6)
        return ToText(XNoReturn()) __tailcall
    
    x19 = 0xd07

for (int64_t i = 0; i != 0xf0; i += 4)
    int32_t x10_3 = *(gDomClient + i + 0x215f4)
    
    if (x10_3 == 0)
        break
    
    if (x10_3 == x19)
        x19 = 0x1300
        break

uint64_t x1_1

if (x19 == CardWhat(gDomClient + 0x20728, zx.q(MouseCard(gDomClient + 0x20728))))
    x1_1 = 0xf3a
else
    x1_1 = zx.q(x19)

int32_t x0_5 = BoardPileWhere(gDomClient + 0x20728, x1_1)
int32_t x8_3 = x0_5

if (x0_5 == 0)
    int32_t x0_7 = BoardPileWhere(gDomClient + 0x20728, 0x121c)
    x8_3 = x0_7
    
    if (x0_7 == 0)
        x8_3 = BoardPileWhere(gDomClient + 0x20728, 0x1517)

uint64_t x11_2 = zx.q(*(gDomClient + 0x205e8))

if (x11_2.d == 0)
    return nullptr

void* i_2 = *(gDomClient + 0x205e0)
void* i_1 = i_2
int64_t x12_1 = i_2 + x11_2 * 0x21d8
void* i_4 = i_2

do
    if (zx.d(*(i_4 + 0x21d2)) != 0)
        if (i_4 != 0xffffffff)
            while (true)
                if (*(i_4 + 0x2c) == 3 && *(i_4 + 0x58) == 0xffffffff && *(i_4 + 0x5c) == x8_3
                        && *(i_4 + 0x60) == 0)
                    if (i_4 != 0)
                        return i_4
                    
                    break
                
                if (i_4 == 0)
                    i_4 = i_2
                else
                    i_4 += 0x21d8
                
                if (i_4 u>= x12_1)
                    goto label_aebac4
                
                while (zx.d(*(i_4 + 0x21d2)) == 0)
                    i_4 += 0x21d8
                    
                    if (i_4 u>= x12_1)
                        goto label_aebac4
                
                if (i_4 == 0xffffffff)
                    goto label_aebac4
        
        break
    
    i_4 += 0x21d8
while (i_4 u< x12_1)

label_aebac4:

while (true)
    if (zx.d(*(i_1 + 0x21d2)) == 0)
        i_1 += 0x21d8
        
        if (i_1 u< x12_1)
            continue
    else if (i_1 != 0xffffffff)
        break
    
    return 0

i_4 = nullptr
int64_t x11_3 = i_2 + x11_2 * 0x21d8

do
    int32_t x15_4 = (*(i_1 + 0x2c) == 3 ? 1 : 0) & (*(i_1 + 0x30) == x19 ? 1 : 0)
    void* i_3
    
    i_3 = x15_4 != 0 ? i_1 : i_4
    
    if ((x15_4 & 1) != 0)
        return i_1
    
    if (i_1 == 0)
        i_1 = i_2
    else
        i_1 += 0x21d8
    
    if (i_1 u>= x11_3)
        break
    
    i_4 = i_3
    
    while (zx.d(*(i_1 + 0x21d2)) == 0)
        i_1 += 0x21d8
        
        if (i_1 u>= x11_3)
            return i_4
while (i_1 != 0xffffffff)

return i_4
