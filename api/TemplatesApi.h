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
 * TemplatesApi.h
 *
 * 
 */

#ifndef FASTREPORT_CLOUD_CLIENT_TemplatesApi_H_
#define FASTREPORT_CLOUD_CLIENT_TemplatesApi_H_

#include "CloudKludge.h"
#include "../ApiClient.h"

#include "BreadcrumbsVM.h"
#include "CountVM.h"
#include "ExportTemplateVM.h"
#include "ExportVM.h"
#include "FileIconVM.h"
#include "FilePermissionsVM.h"
#include "FileRenameVM.h"
#include "FileSorting.h"
#include "FileTagsUpdateVM.h"
#include "FileVM.h"
#include "FilesVM.h"
#include "FolderIconVM.h"
#include "FolderRenameVM.h"
#include "FolderTagsUpdateVM.h"
#include "PrepareTemplateVM.h"
#include "ProblemDetails.h"
#include "ReportVM.h"
#include "TemplateCreateVM.h"
#include "TemplateFolderCreateVM.h"
#include "TemplateVM.h"
#include "TemplatesVM.h"
#include "UpdateFilePermissionsVM.h"
#include <cpprest/details/basic_types.h>


#include <boost/optional.hpp>

namespace fastreport {
namespace cloud {
namespace client {

using namespace fastreport::cloud::models;



class  TemplatesApi 
{
public:

    explicit TemplatesApi( std::shared_ptr<const ApiClient> apiClient );

    virtual ~TemplatesApi();

    /// <summary>
    /// Get count of files and folders what contains in a specified folder
    /// </summary>
    /// <remarks>
    /// User with a Get Count permission can access this method.
    /// </remarks>
    /// <param name="id">folder id</param>
    pplx::task<std::shared_ptr<CountVM>> templateFolderAndFileGetCount(
        utility::string_t id
    ) const;
    /// <summary>
    /// Get all folders and files from specified folder
    /// </summary>
    /// <remarks>
    /// User with a Get Entity permission can access this method.
    /// </remarks>
    /// <param name="id">folder id</param>
    /// <param name="skip">number of folder and files, that have to be skipped (optional, default to 0)</param>
    /// <param name="take">number of folder and files, that have to be returned (optional, default to 0)</param>
    /// <param name="orderBy">indicates a field to sort by (optional, default to new FileSorting())</param>
    /// <param name="desc">indicates if sorting is descending (optional, default to false)</param>
    /// <param name="searchPattern"> (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<FilesVM>> templateFolderAndFileGetFoldersAndFiles(
        utility::string_t id,
        boost::optional<int32_t> skip,
        boost::optional<int32_t> take,
        boost::optional<std::shared_ptr<FileSorting>> orderBy,
        boost::optional<bool> desc,
        boost::optional<utility::string_t> searchPattern
    ) const;
    /// <summary>
    /// Move folder to a specified folder
    /// </summary>
    /// <remarks>
    /// User with a Update Place permission for a folder and Create Entity  for a Parent Folder can access this method.
    /// </remarks>
    /// <param name="id">moving folder id</param>
    /// <param name="folderId">destination folder id</param>
    pplx::task<std::shared_ptr<FileVM>> templateFoldersCopyFolder(
        utility::string_t id,
        utility::string_t folderId
    ) const;
    /// <summary>
    /// Delete specified folder
    /// </summary>
    /// <remarks>
    /// User with a Delete Entity permission can access this method.
    /// </remarks>
    /// <param name="id">folder id</param>
    /// <param name="recursive">delete all childs (optional, default to false)</param>
    pplx::task<void> templateFoldersDeleteFolder(
        utility::string_t id,
        boost::optional<bool> recursive
    ) const;
    /// <summary>
    /// Get specified folder breadcrumbs
    /// </summary>
    /// <remarks>
    /// User with a Get Entity permission can access this method.
    /// </remarks>
    /// <param name="id">folder id</param>
    pplx::task<std::shared_ptr<BreadcrumbsVM>> templateFoldersGetBreadcrumbs(
        utility::string_t id
    ) const;
    /// <summary>
    /// Get specified folder
    /// </summary>
    /// <remarks>
    /// User with a Get Entity permission can access this method.
    /// </remarks>
    /// <param name="id">folder id</param>
    pplx::task<std::shared_ptr<FileVM>> templateFoldersGetFolder(
        utility::string_t id
    ) const;
    /// <summary>
    /// Get all folders from specified folder
    /// </summary>
    /// <remarks>
    /// User with a Get Entity permission can access this method.
    /// </remarks>
    /// <param name="id">folder id</param>
    /// <param name="skip">number of files, that have to be skipped (optional, default to 0)</param>
    /// <param name="take">number of files, that have to be returned (optional, default to 0)</param>
    pplx::task<std::shared_ptr<FilesVM>> templateFoldersGetFolders(
        utility::string_t id,
        boost::optional<int32_t> skip,
        boost::optional<int32_t> take
    ) const;
    /// <summary>
    /// Get count of folders what contains in a specified folder
    /// </summary>
    /// <remarks>
    /// User with a Get Count permission can access this method.
    /// </remarks>
    /// <param name="id">folder id</param>
    pplx::task<std::shared_ptr<CountVM>> templateFoldersGetFoldersCount(
        utility::string_t id
    ) const;
    /// <summary>
    /// Get all folder permissions
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id"></param>
    pplx::task<std::shared_ptr<FilePermissionsVM>> templateFoldersGetPermissions(
        utility::string_t id
    ) const;
    /// <summary>
    /// Get user&#39;s root folder (without parents)
    /// </summary>
    /// <remarks>
    /// &gt; Breakchange. Now user model doesn&#39;t contain a root folders.  This method can return error 400 and 404 when subscription is not found.
    /// </remarks>
    /// <param name="subscriptionId"> (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<FileVM>> templateFoldersGetRootFolder(
        boost::optional<utility::string_t> subscriptionId
    ) const;
    /// <summary>
    /// Move folder to a specified folder
    /// </summary>
    /// <remarks>
    /// User with a Update Place permission for a folder and Create Entity  for a Parent Folder can access this method.
    /// </remarks>
    /// <param name="id">moving folder id</param>
    /// <param name="folderId">destination folder id</param>
    pplx::task<std::shared_ptr<FileVM>> templateFoldersMoveFolder(
        utility::string_t id,
        utility::string_t folderId
    ) const;
    /// <summary>
    /// Create folder
    /// </summary>
    /// <remarks>
    /// User with a Create Entity permisison can access this method.
    /// </remarks>
    /// <param name="id">Identifier of parent folder id</param>
    /// <param name="templateFolderCreateVM">create VM (optional)</param>
    pplx::task<std::shared_ptr<FileVM>> templateFoldersPostFolder(
        utility::string_t id,
        boost::optional<std::shared_ptr<TemplateFolderCreateVM>> templateFolderCreateVM
    ) const;
    /// <summary>
    /// Rename a folder
    /// </summary>
    /// <remarks>
    /// User with a Update Name permision can access this method.
    /// </remarks>
    /// <param name="id"></param>
    /// <param name="folderRenameVM"> (optional)</param>
    pplx::task<std::shared_ptr<FileVM>> templateFoldersRenameFolder(
        utility::string_t id,
        boost::optional<std::shared_ptr<FolderRenameVM>> folderRenameVM
    ) const;
    /// <summary>
    /// Update a folder&#39;s icon
    /// </summary>
    /// <remarks>
    /// User with a Update Icon permission can access this method.
    /// </remarks>
    /// <param name="id">Identifier of folder</param>
    /// <param name="folderIconVM">Update icon model (optional)</param>
    pplx::task<std::shared_ptr<FileVM>> templateFoldersUpdateIcon(
        utility::string_t id,
        boost::optional<std::shared_ptr<FolderIconVM>> folderIconVM
    ) const;
    /// <summary>
    /// Update permissions
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id"></param>
    /// <param name="updateFilePermissionsVM"> (optional)</param>
    pplx::task<void> templateFoldersUpdatePermissions(
        utility::string_t id,
        boost::optional<std::shared_ptr<UpdateFilePermissionsVM>> updateFilePermissionsVM
    ) const;
    /// <summary>
    /// Update tags
    /// </summary>
    /// <remarks>
    /// User with a Update Tags permission can access this method.
    /// </remarks>
    /// <param name="id"></param>
    /// <param name="folderTagsUpdateVM"> (optional)</param>
    pplx::task<std::shared_ptr<FileVM>> templateFoldersUpdateTags(
        utility::string_t id,
        boost::optional<std::shared_ptr<FolderTagsUpdateVM>> folderTagsUpdateVM
    ) const;
    /// <summary>
    /// Copy file to a specified folder
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">file id</param>
    /// <param name="folderId">folder id</param>
    pplx::task<std::shared_ptr<TemplateVM>> templatesCopyFile(
        utility::string_t id,
        utility::string_t folderId
    ) const;
    /// <summary>
    /// Delete specified file
    /// </summary>
    /// <remarks>
    /// User with Delete permission can access the method.
    /// </remarks>
    /// <param name="id">file id</param>
    pplx::task<void> templatesDeleteFile(
        utility::string_t id
    ) const;
    /// <summary>
    /// Export specified report template to a specified format
    /// </summary>
    /// <remarks>
    /// User with Execute Export permission on prepared report and  Create Entity on an export folder can access this method.
    /// </remarks>
    /// <param name="id">report id</param>
    /// <param name="exportTemplateVM">export parameters (string only) (optional)</param>
    pplx::task<std::shared_ptr<ExportVM>> templatesExport(
        utility::string_t id,
        boost::optional<std::shared_ptr<ExportTemplateVM>> exportTemplateVM
    ) const;
    /// <summary>
    /// Get specified file
    /// </summary>
    /// <remarks>
    /// User with Get Entity permission can access this method.
    /// </remarks>
    /// <param name="id">file id</param>
    pplx::task<std::shared_ptr<TemplateVM>> templatesGetFile(
        utility::string_t id
    ) const;
    /// <summary>
    /// Get count of files what contains in a specified folder
    /// </summary>
    /// <remarks>
    /// User with Get Count permission can access this method.
    /// </remarks>
    /// <param name="id">folder id</param>
    pplx::task<std::shared_ptr<CountVM>> templatesGetFilesCount(
        utility::string_t id
    ) const;
    /// <summary>
    /// Get all files from specified folder. &lt;br /&gt;  User with Get Entity permission can access this method. &lt;br /&gt;  The method will returns minimal infomration about the file: &lt;br /&gt;  id, name, size, editedTime, createdTime, tags, status, statusReason.
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">folder id</param>
    /// <param name="skip">number of files, that have to be skipped (optional, default to 0)</param>
    /// <param name="take">number of files, that have to be returned (optional, default to 0)</param>
    pplx::task<std::shared_ptr<TemplatesVM>> templatesGetFilesList(
        utility::string_t id,
        boost::optional<int32_t> skip,
        boost::optional<int32_t> take
    ) const;
    /// <summary>
    /// Get all file permissions
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id"></param>
    pplx::task<std::shared_ptr<FilePermissionsVM>> templatesGetPermissions(
        utility::string_t id
    ) const;
    /// <summary>
    /// Move file to a specified folder
    /// </summary>
    /// <remarks>
    /// User with Update Place permission can access this method.
    /// </remarks>
    /// <param name="id">file id</param>
    /// <param name="folderId">folder id</param>
    pplx::task<std::shared_ptr<TemplateVM>> templatesMoveFile(
        utility::string_t id,
        utility::string_t folderId
    ) const;
    /// <summary>
    /// Prepare specified template to report
    /// </summary>
    /// <remarks>
    /// User with Execute Prepare permission on report and  Create Entity on a prepared report folder can access this method.
    /// </remarks>
    /// <param name="id">template id</param>
    /// <param name="prepareTemplateVM">Template prepare view model (optional)</param>
    pplx::task<std::shared_ptr<ReportVM>> templatesPrepare(
        utility::string_t id,
        boost::optional<std::shared_ptr<PrepareTemplateVM>> prepareTemplateVM
    ) const;
    /// <summary>
    /// Rename a file
    /// </summary>
    /// <remarks>
    /// User with Update Name permission can access this method.
    /// </remarks>
    /// <param name="id"></param>
    /// <param name="fileRenameVM"> (optional)</param>
    pplx::task<std::shared_ptr<TemplateVM>> templatesRenameFile(
        utility::string_t id,
        boost::optional<std::shared_ptr<FileRenameVM>> fileRenameVM
    ) const;
    /// <summary>
    /// Update a files&#39;s icon
    /// </summary>
    /// <remarks>
    /// User with Update Icon permission can access this method.
    /// </remarks>
    /// <param name="id"></param>
    /// <param name="fileIconVM"> (optional)</param>
    pplx::task<std::shared_ptr<TemplateVM>> templatesUpdateIcon(
        utility::string_t id,
        boost::optional<std::shared_ptr<FileIconVM>> fileIconVM
    ) const;
    /// <summary>
    /// Update permissions
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id"></param>
    /// <param name="updateFilePermissionsVM"> (optional)</param>
    pplx::task<void> templatesUpdatePermissions(
        utility::string_t id,
        boost::optional<std::shared_ptr<UpdateFilePermissionsVM>> updateFilePermissionsVM
    ) const;
    /// <summary>
    /// Update tags
    /// </summary>
    /// <remarks>
    /// User with Update Tags permission can access this method.
    /// </remarks>
    /// <param name="id"></param>
    /// <param name="fileTagsUpdateVM"> (optional)</param>
    pplx::task<std::shared_ptr<TemplateVM>> templatesUpdateTags(
        utility::string_t id,
        boost::optional<std::shared_ptr<FileTagsUpdateVM>> fileTagsUpdateVM
    ) const;
    /// <summary>
    /// Upload a file to the specified folder  !
    /// </summary>
    /// <remarks>
    /// User with Create Entity permission can access this method.
    /// </remarks>
    /// <param name="id">Identifier of folder</param>
    /// <param name="templateCreateVM">file&#39;s view model (optional)</param>
    pplx::task<std::shared_ptr<TemplateVM>> templatesUploadFile(
        utility::string_t id,
        boost::optional<std::shared_ptr<TemplateCreateVM>> templateCreateVM
    ) const;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}
}
}

#endif /* FASTREPORT_CLOUD_CLIENT_TemplatesApi_H_ */

