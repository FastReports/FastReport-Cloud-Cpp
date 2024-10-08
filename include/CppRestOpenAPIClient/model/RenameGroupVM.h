/**
 * FastReport Cloud
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: v1
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 7.3.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * RenameGroupVM.h
 *
 * 
 */

#ifndef FASTREPORT_CLOUD_MODELS_RenameGroupVM_H_
#define FASTREPORT_CLOUD_MODELS_RenameGroupVM_H_


#include <cpprest/details/basic_types.h>
#include "CppRestOpenAPIClient/model/CloudBaseVM.h"

namespace fastreport {
namespace cloud {
namespace models {


/// <summary>
/// 
/// </summary>
class  RenameGroupVM
    : public CloudBaseVM
{
public:
    RenameGroupVM();
    virtual ~RenameGroupVM();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// RenameGroupVM members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getName() const;
    bool nameIsSet() const;
    void unsetname();

    void setName(const utility::string_t& value);


protected:
    utility::string_t m_name;
    bool m_nameIsSet;
};


}
}
}

#endif /* FASTREPORT_CLOUD_MODELS_RenameGroupVM_H_ */
