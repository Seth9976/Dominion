// 函数: _Z6HasModPKcS0_P7XString
// 地址: 0xba6754
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* s
XString::XString(&s)
char* x0_2 = strtok(s, ",")
int32_t x19_1

if (x0_2 == 0)
label_ba6810:
    x19_1 = 0
else
    char* x22_1 = x0_2
    
    while (true)
        void* x0_4 = strchr(x22_1, 0x3a)
        char* var_40 = x22_1
        char* var_50
        char** x0_8
        size_t var_48_1
        
        if (x0_4 == 0)
            size_t var_38_2 = strlen(x22_1)
            x0_8 = &var_40
            var_50 = nullptr
            var_48_1 = 0
        else
            void* var_38_1 = x0_4 - x22_1
            var_50 = x0_4 + 1
            var_48_1 = strlen(x0_4 + 1)
            Trim(&var_40)
            x0_8 = &var_50
        Trim(x0_8)
        
        if ((Compare(&var_40, arg2) & 1) != 0)
            if (arg3 != 0)
                char* x1_2 = var_50
                
                if (x1_2 == 0)
                    XString::operator=(arg3)
                else
                    char var_58
                    XString::XString(&var_58, x1_2)
                    XString::operator=(arg3)
                    XString::~XString()
            
            x19_1 = 1
            break
        
        char* x0_13 = strtok(nullptr, ",")
        x22_1 = x0_13
        
        if (x0_13 == 0)
            goto label_ba6810

XString::~XString()
return zx.q(x19_1)
