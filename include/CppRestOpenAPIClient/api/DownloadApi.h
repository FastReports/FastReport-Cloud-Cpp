/**
 * FastReport Cloud
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: v1
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.4.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * DownloadApi.h
 *
 * 
 */

#ifndef FASTREPORT_CLOUD_CLIENT_DownloadApi_H_
#define FASTREPORT_CLOUD_CLIENT_DownloadApi_H_

#include "CloudKludge.h"

#include "CppRestOpenAPIClient/ApiClient.h"

#include "CppRestOpenAPIClient/HttpContent.h"
#include "CppRestOpenAPIClient/model/ProblemDetails.h"
#include <cpprest/details/basic_types.h>
#include <boost/optional.hpp>

namespace fastreport {
namespace cloud {
namespace client {

using namespace fastreport::cloud::models;



class  DownloadApi 
{
public:

    explicit DownloadApi( std::shared_ptr<const ApiClient> apiClient );

    virtual ~DownloadApi();

    /// <summary>
    /// Returns a export file with specified id
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id"></param>
    /// <param name="preview"> (optional, default to false)</param>
    pplx::task<std::shared_ptr<HttpContent>> downloadGetExport(
        utility::string_t id,
        boost::optional<bool> preview
    ) const;
    /// <summary>
    /// Returns export&#39;s thumbnail
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id"></param>
    pplx::task<std::shared_ptr<HttpContent>> downloadGetExportThumbnail(
        utility::string_t id
    ) const;
    /// <summary>
    /// Returns a zip archive with selected ids
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="archiveName">name of the created archive</param>
    /// <param name="fileIds">ids separated with a &#39;,&#39; sign (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="folderIds">ids separated with a &#39;,&#39; sign (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<HttpContent>> downloadGetExports(
        utility::string_t archiveName,
        boost::optional<utility::string_t> fileIds,
        boost::optional<utility::string_t> folderIds
    ) const;
    /// <summary>
    /// returns export, that was created from report with specified id.  INTERNAL USAGE ONLY!
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="reportId"></param>
    pplx::task<std::shared_ptr<HttpContent>> downloadGetLastSVGExport(
        utility::string_t reportId
    ) const;
    /// <summary>
    /// Returns a prepared file with specified id
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id"></param>
    pplx::task<std::shared_ptr<HttpContent>> downloadGetReport(
        utility::string_t id
    ) const;
    /// <summary>
    /// Returns report&#39;s thumbnail
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id"></param>
    pplx::task<std::shared_ptr<HttpContent>> downloadGetReportThumbnail(
        utility::string_t id
    ) const;
    /// <summary>
    /// Returns a zip archive with selected files
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="archiveName">name of the created archive</param>
    /// <param name="fileIds">ids separated with a &#39;,&#39; sign (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="folderIds">ids separated with a &#39;,&#39; sign (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<HttpContent>> downloadGetReports(
        utility::string_t archiveName,
        boost::optional<utility::string_t> fileIds,
        boost::optional<utility::string_t> folderIds
    ) const;
    /// <summary>
    /// Returns a Template file with specified id
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">template id</param>
    pplx::task<std::shared_ptr<HttpContent>> downloadGetTemplate(
        utility::string_t id
    ) const;
    /// <summary>
    /// Returns template&#39;s thumbnail
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id"></param>
    pplx::task<std::shared_ptr<HttpContent>> downloadGetTemplateThumbnail(
        utility::string_t id
    ) const;
    /// <summary>
    /// Returns a zip archive with selected files
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="archiveName">name of the created archive</param>
    /// <param name="fileIds">ids separated with a &#39;,&#39; sign (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="folderIds">ids separated with a &#39;,&#39; sign (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<HttpContent>> downloadGetTemplates(
        utility::string_t archiveName,
        boost::optional<utility::string_t> fileIds,
        boost::optional<utility::string_t> folderIds
    ) const;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}
}
}

#endif /* FASTREPORT_CLOUD_CLIENT_DownloadApi_H_ */

