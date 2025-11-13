// 函数: _Z18XGetSaveGameFolderb
// 地址: 0x10692f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t temp0 = arg1.d & 1
int64_t x8

x8 = temp0 != 0 ? 0x104 : 0

void* s1

if (temp0 != 0)
    s1 = &data_24b9698
else
    s1 = &data_24b9594

if (zx.d(*(&data_24b9594 + x8)) == 0)
    int32_t x20_1 = arg1.d
    int64_t* x21_1 = *(gAndroidGlobals + 8)
    _jmethodID* x22_1 = *(*(**gNativeActivityEngine + 0x18) + 0x18)
    int64_t x0_1 = (*(*x21_1 + 0xf8))(x21_1, x22_1)
    (*(*x21_1 + 0x108))(x21_1, x0_1, "XSaveFileDir", "()Ljava/lang/String;")
    int64_t x0_5 = _JNIEnv::CallObjectMethod(x21_1, x22_1)
    char* s2 = (*(*x21_1 + 0x548))(x21_1, x0_5, 0)
    strncpy(s1, s2, 0x104)
    int64_t x26_1
    
    if ((x20_1 & 1) != 0)
        x26_1 = 0x207
    else
        x26_1 = 0x103
    
    *(&data_24b9594 + x26_1) = 0
    (*(*x21_1 + 0x550))(x21_1, x0_5, s2)
    (*(*x21_1 + 0xb8))(x21_1, x0_1)
    (*(*x21_1 + 0xb8))(x21_1, x0_5)
    
    if ((x20_1 & 1) != 0)
        int32_t x0_12 = strlen(s1)
        
        if (x0_12 != 0x104)
            *(s1 + sx.q(x0_12)) = 0x2f
            *(s1 + sx.q(x0_12 + 1)) = 0
        else
            *(&data_24b9594 + x26_1) = 0x2f

return s1
