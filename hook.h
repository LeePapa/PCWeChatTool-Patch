//typedef void(__stdcall* dstImageFunc)(const wchar_t*wxId, const wchar_t*imgPath);
//typedef void(__stdcall* dstVoiceFunc)(const wchar_t* wxId, const char*ptrData,const int dataLen);
//typedef void(__stdcall* dstTextFunc)(const wchar_t* wxId, const wchar_t* msg,const int type);
#ifndef H_HOOK
#define H_HOOK
void StartHook();
void SendTextMessage(char* wxId, char* texMsg);
void SendFileMessage(char* wxId,char *filePath);
#endif