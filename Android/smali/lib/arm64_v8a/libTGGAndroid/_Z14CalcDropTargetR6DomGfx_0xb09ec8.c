// 函数: _Z14CalcDropTargetR6DomGfx
// 地址: 0xb09ec8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v9
v9.d = *(gDomClient + 0x1f8cc)
int64_t v8
v8.d = *(gDomClient + 0x1f8d0)
int32_t var_18 = v9.d
int32_t var_14 = v8.d
int32_t v0
int32_t v1
int32_t v2
float v3
v0, v1, v2, v3 = RectScreen()

if (v0 f<= v9.d)
    int64_t result = 4
    
    if (not(v3 f< v8.d) && not(v2 f< v9.d) && not(v1 f> v8.d))
        ClientHitTestPos(&var_18)
        result = 4
    
    int32_t var_68
    
    if (v3 f< v8.d || v2 f< v9.d || v1 f> v8.d || var_68 u< 2 || var_68 == 3)
        return result
    
    if (var_68 != 2)
        pthread_kill(pthread_self(), 6)
        return UpdateDropOccuring(XNoReturn()) __tailcall
    
    int32_t var_58
    char* x0_2 = UI2Name(zx.q(var_58))
    char var_78
    XString::XString(&var_78)
    int32_t x0_5 = operator==(x0_2, &var_78)
    XString::~XString()
    
    if ((x0_5 & 1) == 0)
        XString::XString(&var_78)
        int32_t x0_8 = operator==(x0_2, &var_78)
        XString::~XString()
        
        if ((x0_8 & 1) != 0)
            return 1
        
        XString::XString(&var_78)
        int32_t x0_11 = operator==(x0_2, &var_78)
        XString::~XString()
        
        if ((x0_11 & 1) != 0)
            return 2
        
        XString::XString(&var_78)
        int32_t x0_14 = operator==(x0_2, &var_78)
        XString::~XString()
        
        if ((x0_14 & 1) != 0)
            return 0
        
        XString::XString(&var_78)
        int32_t x0_17 = operator==(x0_2, &var_78)
        XString::~XString()
        
        if ((x0_17 & 1) == 0)
            XString::XString(&var_78)
            int32_t x0_20 = operator==(x0_2, &var_78)
            XString::~XString()
            
            if ((x0_20 & 1) == 0)
                XString::XString(&var_78)
                int32_t x0_23 = operator==(x0_2, &var_78)
                XString::~XString()
                
                if ((x0_23 & 1) != 0)
                    return 5
                
                XString::XString(&var_78)
                int32_t x0_26 = operator==(x0_2, &var_78)
                XString::~XString()
                
                if ((x0_26 & 1) != 0)
                    return 6
                
                return 4
        
        return 3

return 4
