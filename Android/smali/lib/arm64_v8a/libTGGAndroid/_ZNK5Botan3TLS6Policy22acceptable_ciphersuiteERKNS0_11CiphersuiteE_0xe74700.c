// 函数: _ZNK5Botan3TLS6Policy22acceptable_ciphersuiteERKNS0_11CiphersuiteE
// 地址: 0xe74700
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

(**arg1)()
void* entry_x1
char* x22 = *(entry_x1 + 0x20)
size_t x0_1 = strlen(x22)
char var_80
void* var_70
void* var_68
char* var_60

if (x0_1 u>= -0x10)
    std::__ndk1::__basic_string_common<true>::__throw_length_error()
else
    uint64_t var_78
    void* x8_3
    int32_t x19_2
    void* x24_1
    void* x23_1
    
    if (x0_1 u>= 0x17)
        uint64_t x24_2 = (x0_1 + 0x10) & 0xfffffffffffffff0
        void* x0_3 = operator new(x24_2)
        x23_1 = x0_3
        var_78 = x0_1
        var_70 = x0_3
        var_80.q = x24_2 | 1
    label_e747a4:
        memcpy(x23_1, x22, x0_1)
        x24_1 = var_68
        *(x23_1 + x0_1) = 0
        x8_3 = var_60 - x24_1
        
        if (var_60 == x24_1)
        label_e748dc:
            x19_2 = 0
            
            if ((zx.d(var_80) & 1) == 0)
                goto label_e74a9c
            
        label_e74a94:
            operator delete(var_70)
        label_e74a9c:
            
            if (var_68 != 0)
                char* x8_23 = var_60
                void* x0_20
                
                if (x8_23 == var_68)
                    x0_20 = var_68
                else
                    char* x21_5 = x8_23
                    
                    do
                        x21_5 = &x21_5[-0x18]
                        
                        if ((zx.d(*x21_5) & 1) != 0)
                            operator delete(*(x8_23 - 8))
                        
                        x8_23 = x21_5
                    while (var_68 != x21_5)
                    
                    x0_20 = var_68
                
                void* var_60_1 = var_68
                operator delete(x0_20)
            
            return zx.q(x19_2)
    else
        x23_1 = &var_80 | 1
        var_80 = (x0_1.d << 1).b
        
        if (x0_1 != 0)
            goto label_e747a4
        
        x24_1 = var_68
        *(x23_1 + x0_1) = 0
        x8_3 = var_60 - x24_1
        
        if (var_60 == x24_1)
            goto label_e748dc
    uint64_t x9_1 = zx.q(var_80)
    int32_t temp2_1 = x9_1.d & 1
    uint64_t x21_2
    
    if (temp2_1 == 0)
        x21_2 = x9_1 u>> 1
    else
        x21_2 = var_78
    
    void* x22_1
    
    if (temp2_1 == 0)
        x22_1 = &var_80 | 1
    else
        x22_1 = var_70
    
    int64_t x23_2 = (x8_3 s>> 3) * -0x5555555555555555
    
    if (x21_2 == 0)
        void* x8_12 = x24_1 + 8
        
        while (true)
            uint64_t x9_5 = zx.q(*(x8_12 - 8))
            uint64_t x9_6
            
            if ((x9_5.d & 1) == 0)
                x9_6 = x9_5 u>> 1
            else
                x9_6 = *x8_12
            
            if (x9_6 == 0)
                break
            
            int64_t temp3_1 = x23_2
            x23_2 -= 1
            x8_12 += 0x18
            
            if (temp3_1 == 1)
                goto label_e748dc
    else
        int64_t x25_1 = 0
        
        while (true)
            char* x9_2 = x24_1 + x25_1 * 0x18
            uint64_t x10_2 = zx.q(*x9_2)
            uint64_t x8_9 = x10_2 u>> 1
            uint64_t x11_3
            
            if ((x10_2.d & 1) == 0)
                x11_3 = x8_9
            else
                x11_3 = *(x9_2 + 8)
            
            if (x11_3 == x21_2)
                if ((x10_2.d & 1) != 0)
                    if (memcmp(*(x24_1 + x25_1 * 0x18 + 0x10), x22_1, x21_2) == 0)
                        break
                else
                    void* x9_3 = &x9_2[1]
                    void* x10_3 = x22_1
                    
                    while (zx.d(*x9_3) == zx.d(*x10_3))
                        uint64_t temp4_1 = x8_9
                        x8_9 -= 1
                        x9_3 += 1
                        x10_3 += 1
                        
                        if (temp4_1 == 1)
                            goto label_e74878
            
            x25_1 += 1
            
            if (x25_1 == x23_2)
                goto label_e748dc
    
label_e74878:
    (*(*arg1 + 0x10))(arg1)
    char* x20_1 = *(entry_x1 + 0x28)
    size_t x0_9 = strlen(x20_1)
    
    if (x0_9 u< -0x10)
        int64_t var_b0
        size_t var_a8
        char* var_a0
        char* x21_3
        
        if (x0_9 u>= 0x17)
            uint64_t x22_2 = (x0_9 + 0x10) & 0xfffffffffffffff0
            char* x0_11 = operator new(x22_2)
            x21_3 = x0_11
            var_a8 = x0_9
            var_a0 = x0_11
            var_b0 = x22_2 | 1
            memcpy(x21_3, x20_1, x0_9)
        else
            x21_3 = &var_b0 | 1
            var_b0.b = (x0_9.d << 1).b
            
            if (x0_9 != 0)
                memcpy(x21_3, x20_1, x0_9)
        
        void* var_98
        void* x22_3 = var_98
        x21_3[x0_9] = 0
        uint64_t x21_4 = zx.q(var_b0.b)
        char* var_90
        
        if (var_90 == x22_3)
        label_e749e8:
            x19_2 = 0
            
            if ((x21_4.d & 1) != 0)
                operator delete(var_a0)
                x22_3 = var_98
        else
            int32_t temp6_1 = x21_4.d & 1
            size_t x19_3
            
            if (temp6_1 == 0)
                x19_3 = x21_4 u>> 1
            else
                x19_3 = var_a8
            
            char* x20_2
            
            if (temp6_1 == 0)
                x20_2 = &var_b0 | 1
            else
                x20_2 = var_a0
            
            int64_t x23_3 = ((var_90 - x22_3) s>> 3) * -0x5555555555555555
            
            if (x19_3 == 0)
                int64_t i_3 = x23_3 - 1
                void* x8_20 = x22_3 + 8
                int64_t i
                
                do
                    uint64_t x11_9 = zx.q(*(x8_20 - 8))
                    i = i_3
                    uint64_t x9_11
                    
                    if ((x11_9.d & 1) == 0)
                        x9_11 = x11_9 u>> 1
                    else
                        x9_11 = *x8_20
                    
                    x19_2 = x9_11 == 0 ? 1 : 0
                    
                    if (x9_11 == 0)
                        break
                    
                    i_3 = i - 1
                    x8_20 += 0x18
                while (i != 0)
                
                if ((x21_4.d & 1) != 0)
                    operator delete(var_a0)
                    x22_3 = var_98
            else
                int64_t x24_3 = 0
                
                while (true)
                    char* x9_8 = x22_3 + x24_3 * 0x18
                    uint64_t x10_6 = zx.q(*x9_8)
                    uint64_t i_2 = x10_6 u>> 1
                    uint64_t i_4
                    
                    if ((x10_6.d & 1) == 0)
                        i_4 = i_2
                    else
                        i_4 = *(x9_8 + 8)
                    
                    if (i_4 == x19_3)
                        if ((x10_6.d & 1) == 0)
                            void* x9_9 = &x9_8[1]
                            char* x10_7 = x20_2
                            uint64_t i_1
                            
                            do
                                if (zx.d(*x9_9) != zx.d(*x10_7))
                                    goto label_e74984
                                
                                i_1 = i_2
                                i_2 -= 1
                                x9_9 += 1
                                x10_7 = &x10_7[1]
                            while (i_1 != 1)
                            break
                        
                        if (memcmp(*(x22_3 + x24_3 * 0x18 + 0x10), x20_2, x19_3) == 0)
                            break
                    
                label_e74984:
                    x24_3 += 1
                    
                    if (x24_3 == x23_3)
                        goto label_e749e8
                
                x19_2 = 1
                
                if ((x21_4.d & 1) != 0)
                    operator delete(var_a0)
                    x22_3 = var_98
        
        if (x22_3 != 0)
            char* x8_21 = var_90
            void* x0_17
            
            if (x8_21 == x22_3)
                x0_17 = x22_3
            else
                char* x20_3 = x8_21
                
                do
                    x20_3 = &x20_3[-0x18]
                    
                    if ((zx.d(*x20_3) & 1) != 0)
                        operator delete(*(x8_21 - 8))
                    
                    x8_21 = x20_3
                while (x22_3 != x20_3)
                
                x0_17 = var_98
            
            void* var_90_1 = x22_3
            operator delete(x0_17)
        
        if ((zx.d(var_80) & 1) == 0)
            goto label_e74a9c
        
        goto label_e74a94

int64_t* x0_22 = std::__ndk1::__basic_string_common<true>::__throw_length_error()
void* x20_5

if ((zx.d(var_80) & 1) == 0)
    x20_5 = var_68
    
    if (x20_5 == 0)
        sub_1101e04(x0_22)
        noreturn
else
    operator delete(var_70)
    x20_5 = var_68
    
    if (x20_5 == 0)
        sub_1101e04(x0_22)
        noreturn

char* x8_25 = var_60
void* x0_25 = x20_5

if (x8_25 != x20_5)
    char* x21_6 = x8_25
    
    do
        x21_6 = &x21_6[-0x18]
        
        if ((zx.d(*x21_6) & 1) != 0)
            operator delete(*(x8_25 - 8))
        
        x8_25 = x21_6
    while (x20_5 != x21_6)
    
    x0_25 = var_68

void* var_60_2 = x20_5
operator delete(x0_25)
sub_1101e04(x0_22)
noreturn
