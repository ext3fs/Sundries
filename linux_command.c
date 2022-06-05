find ./ -type f -exec chmod 644 {} \; -> 현재디렉토리에서 모든파일만 644로 바꾸기
scp -i ./webServer.pem ubuntu@54.180.132.33:~/temp.c ./
