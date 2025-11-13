// 函数: _ZNSt6__ndk118__insertion_sort_3IRPFbRK7XStringS3_EPS1_EEvT0_S8_T_
// 地址: 0x1044d6c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* __offset(XString, 0x10) x23 = arg1 + 0x10
int32_t result = std::__ndk1::__sort3<bool (*&)(XString const&, XString const&), XString*>(arg1, 
    arg1 + 8, x23, arg3)
void* __offset(XString, 0x18) x22 = arg1 + 0x18

if (x22 != arg2)
    int64_t x24_1 = 0
    
    do
        result = (*arg3)(x22, x23)
        
        if ((result & 1) != 0)
            void var_38
            XString::XString(&var_38)
            int64_t x23_1 = x24_1
            void* x0_5
            
            while (true)
                XString::operator=(arg1 + x23_1 + 0x18)
                
                if (x23_1 == -0x10)
                    x0_5 = arg1
                    break
                
                int32_t x0_4 = (*arg3)(&var_38, arg1 + x23_1 + 8)
                x23_1 -= 8
                
                if ((x0_4 & 1) == 0)
                    x0_5 = arg1 + x23_1 + 0x18
                    break
            
            XString::operator=(x0_5)
            result = XString::~XString()
        
        x23 = x22
        x22 += 8
        x24_1 += 8
    while (x22 != arg2)

return result
