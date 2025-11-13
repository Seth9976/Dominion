// 函数: _Z14DomLogGetLines8LanguageRK8GameSaveRK7DomGame9PlayerWhoiiP10DomLogLine11DomLogStyleS6_
// 地址: 0xc0fa78
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg8
DomLogLine* x20 = arg7
int32_t x21 = arg4
int32_t x24 = arg1
int32_t var_7c_1

if (arg8 - 2 u< 2)
    int64_t x8_2 = sx.q(*(gLog + 0x10))
    
    if (x8_2.d == 0)
        return 0
    
    void* x28_1 = *(gLog + 8)
    int64_t x11_1 = x8_2 << 6
    int64_t x10_1 = 0
    int32_t result_1 = 0
    
    while (*(x28_1 + x10_1 + 8) != 4)
        x10_1 += 0x40
        result_1 += 1
        
        if (x11_1 == x10_1)
            result_1 = ((x11_1 - -0x3fffffffc0) u>> 6).d + 1
            break
    
    uint64_t result
    
    if (x8_2.d s< result_1)
        result = zx.q(x8_2.d)
    else
        result = zx.q(result_1)
    
    if (result.d s< 1)
        return result
    
    int64_t fp_1 = 0
    int64_t x26_1 = 0
    var_7c_1 = result.d
    
    while (true)
        DomLogEvent* x25_2 = x28_1 + fp_1
        DomLogEventToLogLine(zx.q(x24), arg2, arg3, x25_2, zx.q(x21), zx.q(x19))
        XString::operator=(x20)
        XString::~XString()
        *(x20 + 8) = 0
        *(x20 + 0x10) = 0xffffffff
        *(x20 + 0x14) = *x25_2
        uint64_t x8_6 = zx.q(*(x25_2 + 0x30))
        
        if ((x8_6.d & 0x80000000) == 0)
            int64_t x10_2 = *(gLog + 0x18)
            int32_t* x9_2 = x10_2 + (x8_6 << 4)
            
            if (x26_1 == zx.q(x9_2[2]) && *x9_2 == x21)
                int32_t x11_6
                
                if (*(x28_1 + fp_1 + 0x3c) s<= *(gLog + (sx.q(x21) << 2) + 0x38))
                    x11_6 = 2
                else
                    x11_6 = 1
                
                *(x20 + 8) = x11_6
                *(x20 + 0xc) = *(x10_2 + (x8_6 << 4) + 4)
                *(x20 + 0x10) = *x9_2
        
        if (zx.q(result.d) - 1 == x26_1)
            break
        
        x28_1 = *(gLog + 8)
        x26_1 += 1
        fp_1 += 0x40
        x20 += 0x18
else
    int32_t x25_1 = arg5
    int32_t x8_1
    
    if (x19 == 1)
        x8_1 = *(gLog + 0x10)
        int32_t x11_8
        
        if (x8_1 == 0)
            x11_8 = 0
        else
            void* x10_3 = *(gLog + 8)
            int64_t i_2 = sx.q(x8_1) << 6
            int32_t x12_6 = 0
            int32_t* x11_7 = x10_3 + 0x24
            int64_t i_1 = i_2
            int64_t i
            
            do
                if (x11_7[-7] == 6 && *x11_7 == 0)
                    x12_6 = x11_7[-2]
                
                i = i_1
                i_1 -= 0x40
                x11_7 = &x11_7[0x10]
            while (i != 0x40)
            x11_8 = x8_1
            
            if (x12_6 s>= 2)
                int32_t x11_9 = 0
                int32_t x13_5 = ((i_2 - -0x3fffffffc0) u>> 6).d + 1
                void* x10_4 = x10_3 + 0x24
                
                while (*(x10_4 - 0x1c) != 6 || *x10_4 != 0 || *(x10_4 - 8) != x12_6 - 1)
                    x11_9 += 1
                    int64_t i_3 = i_2
                    i_2 -= 0x40
                    x10_4 += 0x40
                    
                    if (i_3 == 0x40)
                        x11_9 = x13_5
                        break
                
                x11_8 = x8_1 - x11_9
        
        x25_1 = x8_1 + x25_1 - x11_8
    else
        if (x19 != 0)
            pthread_kill(pthread_self(), 6)
            return DomLogIsCampaignLine(XNoReturn()) __tailcall
        
        x8_1 = *(gLog + 0x10)
    
    int32_t x9_5 = x25_1 + arg6
    int32_t x26_2
    
    x26_2 = x8_1 s< x9_5 ? x8_1 : x9_5
    
    var_7c_1 = x26_2 - x25_1
    
    if (x26_2 s> x25_1)
        int64_t fp_2 = zx.q(x25_1) << 0x20 s>> 0x1a
        
        do
            void* x22_1 = *(gLog + 8)
            DomLogEvent* x27_2 = x22_1 + fp_2
            DomLogEventToLogLine(zx.q(x24), arg2, arg3, x27_2, zx.q(x21), zx.q(x19))
            XString::operator=(x20)
            XString::~XString()
            *(x20 + 8) = 0
            uint64_t x8_13 = zx.q(*(x27_2 + 0x30))
            
            if ((x8_13.d & 0x80000000) == 0)
                int64_t x10_5 = *(gLog + 0x18)
                int32_t* x9_6 = x10_5 + (x8_13 << 4)
                
                if (x25_1 == x9_6[2] && *x9_6 == x21)
                    int32_t x11_14
                    
                    if (*(x22_1 + fp_2 + 0x3c) s<= *(gLog + (sx.q(x21) << 2) + 0x38))
                        x11_14 = 2
                    else
                        x11_14 = 1
                    
                    *(x20 + 8) = x11_14
                    *(x20 + 0xc) = *(x10_5 + (x8_13 << 4) + 4)
                    *(x20 + 0x10) = *x9_6
            
            x25_1 += 1
            fp_2 += 0x40
            x20 += 0x18
        while (x26_2 != x25_1)

return zx.q(var_7c_1)
