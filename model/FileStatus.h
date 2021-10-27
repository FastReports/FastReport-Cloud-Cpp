/**
 * FastReport Cloud
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: v1
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.1.1.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * FileStatus.h
 *
 * 
 */

#ifndef FASTREPORT_CLOUD_MODELS_FileStatus_H_
#define FASTREPORT_CLOUD_MODELS_FileStatus_H_

#include "CloudKludge.h"
#include "../ModelBase.h"


namespace fastreport {
namespace cloud {
namespace models {

class  FileStatus
    : public ModelBase
{
public:
    FileStatus();
    virtual ~FileStatus();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    enum class eFileStatus
    {
        FileStatus_NONE,
        FileStatus_INQUEUE,
        FileStatus_INPROCESS,
        FileStatus_SUCCESS,
        FileStatus_FAILED,
    };

    eFileStatus getValue() const;
    void setValue(eFileStatus const value);

    protected:
        eFileStatus m_value;
};

}
}
}

#endif /* FASTREPORT_CLOUD_MODELS_FileStatus_H_ */
