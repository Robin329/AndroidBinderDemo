#ifndef MY_SERVICE_DEMO
#define MY_SERVICE_DEMO
#include <binder/Binder.h>
#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <binder/IPCThreadState.h>
#include <binder/IServiceManager.h>
#include <binder/Parcel.h>
#include <binder/ProcessState.h>
#include <stdio.h>
using namespace android;
namespace android {
class IMyService : public IInterface {
public:
    DECLARE_META_INTERFACE(MyService); //ʹ�ú꣬����MyService
    virtual void sayHello() = 0;       //���巽��
};

//���������ֶ�
enum {
    HELLO = 1,
};

//�����ͻ���BpMyService
class BpMyService : public BpInterface<IMyService> {
public:
    BpMyService(const sp<IBinder>& impl);
    virtual void sayHello();
};

//���������BnMyService
class BnMyService : public BnInterface<IMyService> {
public:
    virtual status_t onTransact(uint32_t code, const Parcel& data, Parcel* reply, uint32_t flags = 0);
    virtual void sayHello();
};
} // namespace android
#endif
