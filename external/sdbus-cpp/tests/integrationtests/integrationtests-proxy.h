
/*
 * This file was automatically generated by sdbus-c++-xml2cpp; DO NOT EDIT!
 */

#ifndef __sdbuscpp__integrationtests_proxy_h__proxy__H__
#define __sdbuscpp__integrationtests_proxy_h__proxy__H__

#include <sdbus-c++/sdbus-c++.h>
#include <string>
#include <tuple>

namespace org {
namespace sdbuscpp {

class integrationtests_proxy
{
public:
    static constexpr const char* INTERFACE_NAME = "org.sdbuscpp.integrationtests";

protected:
    integrationtests_proxy(sdbus::IProxy& proxy)
        : proxy_(proxy)
    {
        proxy_.uponSignal("simpleSignal").onInterface(INTERFACE_NAME).call([this](){ this->onSimpleSignal(); });
        proxy_.uponSignal("signalWithMap").onInterface(INTERFACE_NAME).call([this](const std::map<int32_t, std::string>& aMap){ this->onSignalWithMap(aMap); });
        proxy_.uponSignal("signalWithVariant").onInterface(INTERFACE_NAME).call([this](const sdbus::Variant& aVariant){ this->onSignalWithVariant(aVariant); });
    }

    ~integrationtests_proxy() = default;

    virtual void onSimpleSignal() = 0;
    virtual void onSignalWithMap(const std::map<int32_t, std::string>& aMap) = 0;
    virtual void onSignalWithVariant(const sdbus::Variant& aVariant) = 0;

public:
    void noArgNoReturn()
    {
        proxy_.callMethod("noArgNoReturn").onInterface(INTERFACE_NAME);
    }

    int32_t getInt()
    {
        int32_t result;
        proxy_.callMethod("getInt").onInterface(INTERFACE_NAME).storeResultsTo(result);
        return result;
    }

    std::tuple<uint32_t, std::string> getTuple()
    {
        std::tuple<uint32_t, std::string> result;
        proxy_.callMethod("getTuple").onInterface(INTERFACE_NAME).storeResultsTo(result);
        return result;
    }

    double multiply(const int64_t& a, const double& b)
    {
        double result;
        proxy_.callMethod("multiply").onInterface(INTERFACE_NAME).withArguments(a, b).storeResultsTo(result);
        return result;
    }

    void multiplyWithNoReply(const int64_t& a, const double& b)
    {
        proxy_.callMethod("multiplyWithNoReply").onInterface(INTERFACE_NAME).withArguments(a, b).dontExpectReply();
    }

    std::vector<int16_t> getInts16FromStruct(const sdbus::Struct<uint8_t, int16_t, double, std::string, std::vector<int16_t>>& arg0)
    {
        std::vector<int16_t> result;
        proxy_.callMethod("getInts16FromStruct").onInterface(INTERFACE_NAME).withArguments(arg0).storeResultsTo(result);
        return result;
    }

    sdbus::Variant processVariant(const sdbus::Variant& variant)
    {
        sdbus::Variant result;
        proxy_.callMethod("processVariant").onInterface(INTERFACE_NAME).withArguments(variant).storeResultsTo(result);
        return result;
    }

    std::map<int32_t, sdbus::Variant> getMapOfVariants(const std::vector<int32_t>& x, const sdbus::Struct<sdbus::Variant, sdbus::Variant>& y)
    {
        std::map<int32_t, sdbus::Variant> result;
        proxy_.callMethod("getMapOfVariants").onInterface(INTERFACE_NAME).withArguments(x, y).storeResultsTo(result);
        return result;
    }

    sdbus::Struct<std::string, sdbus::Struct<std::map<int32_t, int32_t>>> getStructInStruct()
    {
        sdbus::Struct<std::string, sdbus::Struct<std::map<int32_t, int32_t>>> result;
        proxy_.callMethod("getStructInStruct").onInterface(INTERFACE_NAME).storeResultsTo(result);
        return result;
    }

    int32_t sumStructItems(const sdbus::Struct<uint8_t, uint16_t>& arg0, const sdbus::Struct<int32_t, int64_t>& arg1)
    {
        int32_t result;
        proxy_.callMethod("sumStructItems").onInterface(INTERFACE_NAME).withArguments(arg0, arg1).storeResultsTo(result);
        return result;
    }

    uint32_t sumVectorItems(const std::vector<uint16_t>& arg0, const std::vector<uint64_t>& arg1)
    {
        uint32_t result;
        proxy_.callMethod("sumVectorItems").onInterface(INTERFACE_NAME).withArguments(arg0, arg1).storeResultsTo(result);
        return result;
    }

    uint32_t doOperation(const uint32_t& arg0)
    {
        uint32_t result;
        proxy_.callMethod("doOperation").onInterface(INTERFACE_NAME).withArguments(arg0).storeResultsTo(result);
        return result;
    }

    uint32_t doOperationAsync(const uint32_t& arg0)
    {
        uint32_t result;
        proxy_.callMethod("doOperationAsync").onInterface(INTERFACE_NAME).withArguments(arg0).storeResultsTo(result);
        return result;
    }

    sdbus::Signature getSignature()
    {
        sdbus::Signature result;
        proxy_.callMethod("getSignature").onInterface(INTERFACE_NAME).storeResultsTo(result);
        return result;
    }

    sdbus::ObjectPath getObjPath()
    {
        sdbus::ObjectPath result;
        proxy_.callMethod("getObjPath").onInterface(INTERFACE_NAME).storeResultsTo(result);
        return result;
    }

    sdbus::UnixFd getUnixFd()
    {
        sdbus::UnixFd result;
        proxy_.callMethod("getUnixFd").onInterface(INTERFACE_NAME).storeResultsTo(result);
        return result;
    }

    std::map<uint64_t, sdbus::Struct<std::map<uint8_t, std::vector<sdbus::Struct<sdbus::ObjectPath, bool, sdbus::Variant, std::map<int32_t, std::string>>>>, sdbus::Signature, std::string>> getComplex()
    {
        std::map<uint64_t, sdbus::Struct<std::map<uint8_t, std::vector<sdbus::Struct<sdbus::ObjectPath, bool, sdbus::Variant, std::map<int32_t, std::string>>>>, sdbus::Signature, std::string>> result;
        proxy_.callMethod("getComplex").onInterface(INTERFACE_NAME).storeResultsTo(result);
        return result;
    }

    void throwError()
    {
        proxy_.callMethod("throwError").onInterface(INTERFACE_NAME);
    }

    void throwErrorWithNoReply()
    {
        proxy_.callMethod("throwErrorWithNoReply").onInterface(INTERFACE_NAME).dontExpectReply();
    }

    void doPrivilegedStuff()
    {
        proxy_.callMethod("doPrivilegedStuff").onInterface(INTERFACE_NAME);
    }

    void emitTwoSimpleSignals()
    {
        proxy_.callMethod("emitTwoSimpleSignals").onInterface(INTERFACE_NAME);
    }

public:
    uint32_t action()
    {
        return proxy_.getProperty("action").onInterface(INTERFACE_NAME);
    }

    void action(const uint32_t& value)
    {
        proxy_.setProperty("action").onInterface(INTERFACE_NAME).toValue(value);
    }

    bool blocking()
    {
        return proxy_.getProperty("blocking").onInterface(INTERFACE_NAME);
    }

    void blocking(const bool& value)
    {
        proxy_.setProperty("blocking").onInterface(INTERFACE_NAME).toValue(value);
    }

    std::string state()
    {
        return proxy_.getProperty("state").onInterface(INTERFACE_NAME);
    }

private:
    sdbus::IProxy& proxy_;
};

}} // namespaces

#endif
