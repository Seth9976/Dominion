// 函数: _Z8AddCardsP11DomCardEnumiiR14DomSetupConfigRK10StringSpan11LookupStyleS0_i
// 地址: 0x9e71fc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x25 = *arg5
DomCardEnum* var_d8 = arg1

if (x25 == 0)
    return 

int64_t x26_1 = *(arg5 + 8)
int32_t x22_1 = arg6
int128_t v0_1
int128_t v1_1
arg1, v0_1, v1_1 = STokenize::STokenizeIter::ParseStr(x25)
int128_t var_80
v1_1 = var_80
int128_t var_70
int128_t var_a0 = var_70
int64_t i = v1_1:8.q
char* x8_1 = var_a0.q
char* x1_1 = v1_1.q
int64_t i_1

if (x8_1 == 0)
    i_1 = i
else
    i_1 = var_a0:8.q

char* x8_2

x8_2 = x8_1 == 0 ? x1_1 : x8_1

char* x9_2 = &x8_2[i_1]
int64_t x8_3 = x25 + x26_1
int32_t x10_1 = x8_3.d - x9_2.d
char* x26_2
void* x28_1

if (x10_1 s>= 1)
    uint64_t x10_2 = zx.q(x10_1)
    x26_2 = x9_2
    
    while (true)
        uint64_t x12_1 = zx.q(*x9_2)
        
        if (x12_1 u> 0x3f)
            break
        
        if ((1 << x12_1 & 0x400130100002601) == 0)
            break
        
        x26_2 = &x26_2[1]
        uint64_t temp0_1 = x10_2
        x10_2 -= 1
        x9_2 = &x9_2[1]
        
        if (temp0_1 == 1)
            goto label_9e72c4
    
    x28_1 = x8_3 - x26_2
    char* var_90_2 = x26_2
    void* var_88_2 = x28_1
    
    if (x1_1 != 0)
        goto label_9e72ec
    
    return 

label_9e72c4:
x28_1 = nullptr
x26_2 = nullptr
int64_t var_90_1 = 0
int64_t var_88_1 = 0

if (x1_1 == 0)
    return 

label_9e72ec:
StringSpan* var_d0_1 = &var_a0

if (arg2 == 0)
    int32_t x23_2 = 0
    
    while (i == 0 || zx.d(*x1_1) - 0x30 u>= 0xa)
        arg1 = LookupCardByName(x1_1, i.d, i.d, zx.q(x22_1))
        
        if (arg1.d != 0)
            int32_t x27_2 = arg1.d
            
            if (arg8 != 0 && x23_2 != arg8 && (IsLandscape(arg1, zx.q(arg3)).d & 1) != 0)
                *(arg7 + (sx.q(x23_2) << 2)) = x27_2
                AddExtraCardData(zx.q(arg3), arg4, zx.q(x27_2), var_d0_1)
                x23_2 += 1
        
        if (x26_2 == 0)
            return 
        
        int128_t v0_3
        int128_t v1_3
        arg1, v0_3, v1_3 = STokenize::STokenizeIter::ParseStr(x26_2)
        v1_3 = var_80
        var_a0 = var_70
        i = v1_3:8.q
        char* x8_16 = var_a0.q
        x1_1 = v1_3.q
        int64_t i_3
        
        if (x8_16 == 0)
            i_3 = i
        else
            i_3 = var_a0:8.q
        
        char* x8_17
        
        x8_17 = x8_16 == 0 ? x1_1 : x8_16
        
        void* x8_18 = &x8_17[i_3]
        void* x9_8 = x26_2 + x28_1 - x8_18
        
        if (x9_8.d s< 1)
        label_9e7460:
            x28_1 = nullptr
            x26_2 = nullptr
            int64_t var_90_5 = 0
            int64_t var_88_5 = 0
            
            if (x1_1 == 0)
                return 
        else
            int32_t x10_5 = 0
            void* x11_2 = x9_8 & 0xffffffff
            void* x12_5 = x8_18
            
            while (true)
                uint64_t x13_4 = zx.q(*x12_5)
                
                if (x13_4 u> 0x3f)
                    break
                
                if ((1 << x13_4 & 0x400130100002601) == 0)
                    break
                
                x10_5 += 1
                void* temp1_1 = x11_2
                x11_2 -= 1
                x12_5 += 1
                
                if (temp1_1 == 1)
                    goto label_9e7460
            
            uint64_t x10_6 = zx.q(x10_5)
            x26_2 = x8_18 + x10_6
            x28_1 = x9_8 - x10_6
            char* var_90_6 = x26_2
            void* var_88_6 = x28_1
            
            if (x1_1 == 0)
                return 
else
    int32_t x27_1 = 0
    int32_t x23_1 = 0
    
    while (i == 0 || zx.d(*x1_1) - 0x30 u>= 0xa)
        arg1 = LookupCardByName(x1_1, i.d, i.d, zx.q(x22_1))
        
        if (arg1.d == 0)
            goto label_9e7394
        
        int32_t fp_1 = arg1.d
        
        if ((IsLandscape(arg1, zx.q(arg3)).d & 1) != 0)
            if (arg8 == 0 || x23_1 == arg8)
                goto label_9e7394
            
            *(arg7 + (sx.q(x23_1) << 2)) = fp_1
            AddExtraCardData(zx.q(arg3), arg4, zx.q(fp_1), var_d0_1)
            x23_1 += 1
            
            if (x26_2 == 0)
                return 
        else if (x27_1 != arg2)
            *(var_d8 + (sx.q(x27_1) << 2)) = fp_1
            AddExtraCardData(zx.q(arg3), arg4, zx.q(fp_1), var_d0_1)
            x27_1 += 1
            
            if (x26_2 == 0)
                return 
        else
            x27_1 = arg2
        label_9e7394:
            
            if (x26_2 == 0)
                return 
        
        int128_t v0_2
        int128_t v1_2
        arg1, v0_2, v1_2 = STokenize::STokenizeIter::ParseStr(x26_2)
        v1_2 = var_80
        var_a0 = var_70
        i = v1_2:8.q
        char* x8_9 = var_a0.q
        x1_1 = v1_2.q
        int64_t i_2
        
        if (x8_9 == 0)
            i_2 = i
        else
            i_2 = var_a0:8.q
        
        char* x8_10
        
        x8_10 = x8_9 == 0 ? x1_1 : x8_9
        
        void* x8_11 = &x8_10[i_2]
        void* x9_5 = x26_2 + x28_1 - x8_11
        
        if (x9_5.d s< 1)
        label_9e7308:
            x28_1 = nullptr
            x26_2 = nullptr
            int64_t var_90_3 = 0
            int64_t var_88_3 = 0
            
            if (x1_1 == 0)
                return 
        else
            int32_t x10_3 = 0
            void* x11_1 = x9_5 & 0xffffffff
            void* x12_4 = x8_11
            
            while (true)
                uint64_t x13_1 = zx.q(*x12_4)
                
                if (x13_1 u> 0x3f)
                    break
                
                if ((1 << x13_1 & 0x400130100002601) == 0)
                    break
                
                x10_3 += 1
                void* temp2_1 = x11_1
                x11_1 -= 1
                x12_4 += 1
                
                if (temp2_1 == 1)
                    goto label_9e7308
            
            uint64_t x10_4 = zx.q(x10_3)
            x26_2 = x8_11 + x10_4
            x28_1 = x9_5 - x10_4
            char* var_90_4 = x26_2
            void* var_88_4 = x28_1
            
            if (x1_1 == 0)
                return 

XString::XString(&var_80, x1_1)
*var_d8 = neg.d(atoi(XString::operator char const*()))
XString::~XString()
