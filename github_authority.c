sudo git config --global --unset credential.helper
git config --global push.default simple
git config --global credential.helper store -> 영구저장
vi C:/Users/ext3fs/.git-credentials
	> http:<user_id>:<user_access_token>@github.com -> 토큰 저장
