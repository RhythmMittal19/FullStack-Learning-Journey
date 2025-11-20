from django.shortcuts import render

posts = [
    {
        'author': 'RhythmM',
        'title': 'Blog posts 1',
        'content': 'First Post Content',
        "date_posted": "October 27, 2025"
    },
    {
        'author': 'SherlockM',
        'title': 'Blog posts 2',
        'content': 'Second Post Content',
        "date_posted": "October 28, 2025"
    }
]

# Create your views here.

def home(request):
    context = {
        "posts": posts
    }
    return render(request,"blog/home.html",context)

def about(request):
    return render(request,"blog/about.html", {"title": "About"})

