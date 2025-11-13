// 函数: _Z21GameResumeHandleError8GameType9GameIndex
// 地址: 0x9ae9c4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg2
char var_18
char* x0 = &var_18
char var_38
char var_30
char var_28

if (arg1 == 2)
    XString::XString(x0)
    XString::XString(&var_28)
    XString::XString(&var_30)
    XString::XString(&var_38)
    GameMsgBox(&var_18, &var_28, 0x20, &var_30, &var_38, nullptr, nullptr)
    XString::~XString()
    XString::~XString()
    XString::~XString()
    XString::~XString()
    *(GetClient() + 0x5044) = 7
    *(GetClient() + 0x5064) = 4
    void* result = GetClient()
    *(result + 0x5058) = x19
    return result

XString::XString(x0)
XString::XString(&var_28)
XString::XString(&var_30)
XString::XString(&var_38)
GameMsgBox(&var_18, &var_28, 0x20, &var_30, &var_38, nullptr, nullptr)
XString::~XString()
XString::~XString()
XString::~XString()
XString::~XString()
*(GetClient() + 0x5044) = 7
*(GetClient() + 0x5064) = 0
*(GetClient() + 0x5058) = x19
int32_t* x8 = GetActiveProfile() + 0x4330

if (*x8 == x19)
    *x8 = 0
else if (x8[1] != x19)
    if (GetDailyGameIndex(GetClient() + 0x5048) == x19)
        void* x0_18 = GetClient()
        int32_t* x19_1 = GetClient() + 0x5048
        Date* i
        
        for (i = *(*(x0_18 + 0x75d8) + ((((0xffff00ff & zx.q(*x19_1 << 0x10))
                | zx.q(zx.d((x19_1[1]).b) << 8) | zx.q(x19_1[2].b)) & zx.q(*(x0_18 + 0x75e0))) << 3)); 
                i != 0; i = *(i + 0x28))
            if ((operator!=(x19_1, i) & 1) == 0)
                i += 0x10
                break
        
        void* x0_22 = GetActiveProfile()
        int32_t i_1 = *i
        int64_t* x9_5 =
            *(x0_22 + 0x7590) + (((zx.q(i_1) | zx.q(i_1 s>> 4)) & zx.q(*(x0_22 + 0x7598))) << 3)
        int32_t* x0_23 = *x9_5
        
        if (x0_23 != 0)
            if (i_1 != *x0_23)
                int32_t* x9_6
                
                do
                    x9_6 = x0_23
                    x0_23 = *(x0_23 + 8)
                    
                    if (x0_23 == 0)
                        return SaveProfiles()
                while (i_1 != *x0_23)
                
                x9_5 = &x9_6[2]
            
            *x9_5 = *(x0_23 + 8)
            XPooledFree(x0_23, 0x10)
            *(x0_22 + 0x759c) -= 1
else
    x8[1] = 0

return SaveProfiles()
