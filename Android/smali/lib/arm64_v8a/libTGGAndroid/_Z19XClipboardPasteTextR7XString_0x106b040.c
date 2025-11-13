// 函数: _Z19XClipboardPasteTextR7XString
// 地址: 0x106b040
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x21 = *(gAndroidGlobals + 8)
_jmethodID* x20 = *(*(**gNativeActivityEngine + 0x18) + 0x18)
int64_t x0_1 = (*(*x21 + 0xf8))(x21, x20)
(*(*x21 + 0x108))(x21, x0_1, "XClipboardCanPasteText", &data_775c7a)
char x0_5 = _JNIEnv::CallBooleanMethod(x21, x20)
(*(*x21 + 0xb8))(x21, x0_1)

if (zx.d(x0_5) != 0)
    int64_t* x21_1 = *(gAndroidGlobals + 8)
    _jmethodID* x22_1 = *(*(**gNativeActivityEngine + 0x18) + 0x18)
    int64_t x0_8 = (*(*x21_1 + 0xf8))(x21_1, x22_1)
    (*(*x21_1 + 0x108))(x21_1, x0_8, "XClipboardPasteText", "()Ljava/lang/String;")
    int64_t x0_12 = _JNIEnv::CallObjectMethod(x21_1, x22_1)
    int64_t x0_14 = (*(*x21_1 + 0x548))(x21_1, x0_12, 0)
    XString::operator=(arg1)
    (*(*x21_1 + 0x550))(x21_1, x0_12, x0_14)
    (*(*x21_1 + 0xb8))(x21_1, x0_8)
    (*(*x21_1 + 0xb8))(x21_1, x0_12)

return zx.q(zx.d(x0_5) != 0 ? 1 : 0)
