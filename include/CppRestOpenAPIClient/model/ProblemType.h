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
 * ProblemType.h
 *
 * 
 */

#ifndef FASTREPORT_CLOUD_MODELS_ProblemType_H_
#define FASTREPORT_CLOUD_MODELS_ProblemType_H_

#include "CloudKludge.h"
#include "CppRestOpenAPIClient/ModelBase.h"


namespace fastreport {
namespace cloud {
namespace models {

class  ProblemType
    : public ModelBase
{
public:
    ProblemType();
    virtual ~ProblemType();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    enum class eProblemType
    {
        ProblemType_ANONPERMISSIONS,
        ProblemType_UNRELATEDFILES,
        ProblemType_OTHERWITHOUTGET,
        ProblemType_DEADSUBINUSER,
        ProblemType_EMPTYSUB,
        ProblemType_LOSTFILECHUNKS,
        ProblemType_WRONGSUBSCRIPITONSIZES,
        ProblemType_FILESWITHOUTCHUNKS,
        ProblemType_FILESWITHDELETEDPARENTS,
    };

    eProblemType getValue() const;
    void setValue(eProblemType const value);

    protected:
        eProblemType m_value;
};

}
}
}

#endif /* FASTREPORT_CLOUD_MODELS_ProblemType_H_ */
