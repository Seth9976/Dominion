// 函数: _ZNK5Botan3TLS6Policy22allowed_signature_hashERKNSt6__ndk112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE
// 地址: 0xe72ee8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

(*(*arg1 + 8))()
char* var_50
char* x22 = var_50
void* var_58
int32_t x19_2

if (x22 == var_58)
label_e72fd0:
    x19_2 = 0
    
    if (var_58 != 0)
    label_e73014:
        void* var_50_1
        
        if (x22 == var_58)
        label_e73058:
            var_50_1 = var_58
            operator delete(var_58)
        else
        label_e7301c:
            char* x20_2 = x22
            
            do
                x20_2 = &x20_2[-0x18]
                
                if ((zx.d(*x20_2) & 1) != 0)
                    operator delete(*(x22 - 8))
                
                x22 = x20_2
            while (var_58 != x20_2)
            
            var_50_1 = var_58
            operator delete(var_58)
    
label_e7307c:
    return zx.q(x19_2)

char* entry_x1
uint64_t x9_1 = zx.q(*entry_x1)
int32_t temp0_1 = x9_1.d & 1
uint64_t x19_1

if (temp0_1 == 0)
    x19_1 = x9_1 u>> 1
else
    x19_1 = *(entry_x1 + 8)

void* x20_1

if (temp0_1 != 0)
    x20_1 = *(entry_x1 + 0x10)
else
    x20_1 = &entry_x1[1]

int64_t x23_1 = ((x22 - var_58) s>> 3) * -0x5555555555555555

if (x19_1 == 0)
    int64_t i_3 = x23_1 - 1
    void* x8_4 = var_58 + 8
    int64_t i
    
    do
        uint64_t x11_4 = zx.q(*(x8_4 - 8))
        i = i_3
        uint64_t x9_5
        
        if ((x11_4.d & 1) == 0)
            x9_5 = x11_4 u>> 1
        else
            x9_5 = *x8_4
        
        x19_2 = x9_5 == 0 ? 1 : 0
        
        if (x9_5 == 0)
            break
        
        i_3 = i - 1
        x8_4 += 0x18
    while (i != 0)
    goto label_e73014

int64_t x24_1 = 0

while (true)
    char* x9_2 = var_58 + x24_1 * 0x18
    uint64_t x10_2 = zx.q(*x9_2)
    uint64_t i_2 = x10_2 u>> 1
    uint64_t i_4
    
    if ((x10_2.d & 1) == 0)
        i_4 = i_2
    else
        i_4 = *(x9_2 + 8)
    
    if (i_4 == x19_1)
        if ((x10_2.d & 1) == 0)
            void* x9_3 = &x9_2[1]
            void* x10_3 = x20_1
            uint64_t i_1
            
            do
                if (zx.d(*x9_3) != zx.d(*x10_3))
                    goto label_e72f6c
                
                i_1 = i_2
                i_2 -= 1
                x9_3 += 1
                x10_3 += 1
            while (i_1 != 1)
            x19_2 = 1
            
            if (var_58 != 0)
                goto label_e73014
            
            goto label_e7307c
        
        if (memcmp(*(var_58 + x24_1 * 0x18 + 0x10), x20_1, x19_1) == 0)
            x19_2 = 1
            
            if (x22 != var_58)
                break
            
            goto label_e73058
    
label_e72f6c:
    x24_1 += 1
    
    if (x24_1 == x23_1)
        goto label_e72fd0

goto label_e7301c
